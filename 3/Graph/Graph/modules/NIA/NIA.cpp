#include "NIA.h"

void NIA_GetCursorPosition(HDC hdc, Point* p)
{
	POINT point;
	HWND hwnd = WindowFromDC(hdc);
	GetCursorPos(&point);
	ScreenToClient(hwnd, &point);
	p->x = point.x;
	p->y = point.y;
}

void NIA_GetCursorPosition(Event* e, Point* p)
{
	p->x = LOWORD(e->lParam);
	p->y = HIWORD(e->lParam);
}

Point NIA_GetCursorPosition(HDC hdc)
{
	Point p;
	NIA_GetCursorPosition(hdc, &p);
	return p;
}

Point NIA_GetCursorPosition(Event* e)
{
	Point p;
	NIA_GetCursorPosition(e, &p);
	return p;
}

void NIA_SetCurrentBitmap(HDC hdc, HBITMAP bitmap)
{
	SelectObject(hdc, bitmap);
}
 
void NIA_BitmapCopy(HDC dst_hdc, HDC src_hdc, Rect* src, Rect* dst)
{
	SetStretchBltMode(dst_hdc, COLORONCOLOR);

	if (src == nullptr)
	{
		BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
			src_hdc, 0, 0, SRCCOPY);
		return;
	}

	BitBlt(dst_hdc, dst->x, dst->y, dst->w, dst->h,
		src_hdc, src->x, src->y, SRCCOPY);
}

void NIA_FillRect(HDC hdc, Rect rect, HexColor color, HexColor border_color, int thickness)
{
	HBRUSH brush;
	HPEN pen;
	pen = CreatePen(PS_SOLID, thickness, border_color);
	brush = CreateSolidBrush(color);
	SelectBrush(hdc, brush);
	SelectPen(hdc, pen);

	FillRect(hdc, &rect.to_rect(), brush);

	DeleteObject(brush);
	DeleteObject(pen);
}

void NIA_DrawLine(HDC hdc, Line line, HexColor color, int thickness)
{
	HPEN pen = CreatePen(PS_SOLID, thickness, color);
	SelectPen(hdc, pen);

	MoveToEx(hdc, line.x1, line.y1, nullptr);
	LineTo(hdc, line.x2, line.y2);

	DeleteObject(pen);
}

void NIA_FillEllipse(HDC hdc, Point point, int radius, HexColor color, HexColor border_color, int thickness)
{
	HBRUSH brush;
	HPEN pen;
	pen = CreatePen(PS_SOLID, thickness, border_color);
	brush = CreateSolidBrush(color);
	SelectBrush(hdc, brush);
	SelectPen(hdc, pen);

	Ellipse(hdc, point.x - radius, point.y - radius, point.x + radius, point.y + radius);

	DeleteObject(brush);
	DeleteObject(pen);
}

HFONT NIA_LoadFont(wstring name, int size)
{
	return CreateFont(size, NULL, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, VARIABLE_PITCH, name.c_str());
}

void NIA_CloseFont(HFONT font)
{
	DeleteObject((HGDIOBJ)font);
}

void NIA_RenderText(HDC dst_hdc, HFONT font, wstring text, Rect size)
{
	SelectFont(dst_hdc, font);
	ExtTextOut(dst_hdc, size.x, size.y, ETO_CLIPPED, NULL, text.c_str(), text.length(), NULL);
}

wstring NIA_ShowOpenFileDialog(HWND hwnd, LPCWSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));

	WCHAR path[255] = L"\0";



	of->lStructSize = sizeof(OPENFILENAME);
	of->hwndOwner = hwnd;
	of->hInstance = NULL;
	of->lpstrFilter = filter;
	of->lpstrCustomFilter = NULL;
	of->nMaxCustFilter = NULL;
	of->nFilterIndex = 1;
	of->lpstrFile = path;
	of->nMaxFile = 256;
	of->lpstrFileTitle = NULL;
	of->nMaxFileTitle = NULL;
	of->lpstrInitialDir = NULL;
	of->lpstrTitle = NULL;

	of->Flags = OFN_FILEMUSTEXIST | OFN_EXPLORER;
	of->nFileOffset = NULL;
	of->nFileExtension = NULL;
	of->lpstrDefExt = NULL;
	of->lCustData = NULL;
	of->lpfnHook = NULL;
	of->lpTemplateName = NULL;

	GetOpenFileName(of);
	

	wstring path_string = path;
	return path_string;
}


wstring NIA_ShowSaveFileDialog(HWND hwnd, LPCWSTR filter)
{
	OPENFILENAME* of = (OPENFILENAME*)calloc(1, sizeof(OPENFILENAME));

	WCHAR path[255] = L"\0";

	of->lStructSize = sizeof(OPENFILENAME);
	of->hwndOwner = hwnd;
	of->hInstance = NULL;
	of->lpstrFilter = filter;
	of->lpstrCustomFilter = NULL;
	of->nMaxCustFilter = NULL;
	of->nFilterIndex = NULL;
	of->lpstrFile = path;
	of->nMaxFile = 256;
	of->lpstrFileTitle = NULL;
	of->nMaxFileTitle = NULL;
	of->lpstrInitialDir = NULL;
	of->lpstrTitle = NULL;

	of->Flags = NULL;
	of->nFileOffset = NULL;
	of->nFileExtension = NULL;
	of->lpstrDefExt = NULL;
	of->lCustData = NULL;
	of->lpfnHook = NULL;
	of->lpTemplateName = NULL;

	GetSaveFileName(of);


	wstring path_string = path;
	return path_string;
}

HANDLE NIA_OpenFile(wstring path, DWORD dwAccess, DWORD dwShareMode)
{
	return CreateFile(path.c_str(), dwAccess, dwShareMode, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
}

void* NIA_ReadFile(HWND hwnd, LPCWSTR filter)
{
	wstring path = NIA_ShowOpenFileDialog(hwnd, filter);

	HANDLE file = NIA_OpenFile(path);

	DWORD file_size;
	file_size = GetFileSize(file, nullptr);

	char* buffer = new char[file_size + 10];

	DWORD count_read;

	ReadFile(file, buffer, file_size, &count_read, nullptr);

	buffer[count_read] = '\0';

	CloseHandle(file);

	return buffer;
}

void NIA_WriteFile(HWND hwnd, LPCWSTR filter, char* buffer, size_t count)
{
	wstring path = NIA_ShowSaveFileDialog(hwnd, filter);

	HANDLE file = NIA_OpenFile(path);

	DWORD count_read;

	WriteFile(file, buffer, count, &count_read, nullptr);

	CloseHandle(file);
}



int NIA::to_integer(wstring str)
{
	return stoi(str);
}

int NIA::to_integer(string str)
{
	return stoi(str);
}

int NIA::to_integer(char* str)
{
	return atoi(str);
}

int NIA::to_integer(const char* str)
{
	return atoi(str);
}

vector<int>* NIA::to_integer(vector<wstring>* strings)
{
	vector<int>* numbers = new vector<int>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_integer(str));
	}

	return numbers;
}

vector<int>* NIA::to_integer(vector<string>* strings)
{
	vector<int>* numbers = new vector<int>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_integer(str));
	}

	return numbers;
}

vector<int>* NIA::to_integer(vector<Point>* points)
{
	vector<int>* numbers = new vector<int>;

	for (auto& point : *points)
	{
		numbers->push_back(point.x);
		numbers->push_back(point.y);
	}

	return numbers;
}

long NIA::to_long(wstring str)
{
	return stol(str);
}

long NIA::to_long(string str)
{
	return stol(str);
}

long NIA::to_long(char* str)
{
	return atol(str);
}

long NIA::to_long(const char* str)
{
	return atol(str);
}

vector<long>* NIA::to_long(vector<wstring>* strings)
{
	vector<long>* numbers = new vector<long>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_long(str));
	}

	return numbers;
}

vector<long>* NIA::to_long(vector<string>* strings)
{
	vector<long>* numbers = new vector<long>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_long(str));
	}

	return numbers;
}

float NIA::to_float(wstring str)
{
	return (float)stof(str);
}

float NIA::to_float(string str)
{
	return (float)stof(str);
}

float NIA::to_float(char* str)
{
	return (float)atof(str);
}

float NIA::to_float(const char* str)
{
	return (float)atof(str);
}

vector<float>* NIA::to_float(vector<wstring>* strings)
{
	vector<float>* numbers = new vector<float>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_float(str));
	}

	return numbers;
}

vector<float>* NIA::to_float(vector<string>* strings)
{
	vector<float>* numbers = new vector<float>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_float(str));
	}

	return numbers;
}

double NIA::to_double(wstring str)
{
	return stod(str);
}

double NIA::to_double(string str)
{
	return stod(str);
}

double NIA::to_double(char* str)
{
	return atof(str);
}

double NIA::to_double(const char* str)
{
	return atof(str);
}

vector<double>* NIA::to_double(vector<wstring>* strings)
{
	vector<double>* numbers = new vector<double>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_double(str));
	}

	return numbers;
}

vector<double>* NIA::to_double(vector<string>* strings)
{
	vector<double>* numbers = new vector<double>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_double(str));
	}

	return numbers;
}

vector<double>* NIA::to_double(vector<Point2D>* points)
{
	vector<double>* numbers = new vector<double>;

	for (auto& point : *points)
	{
		numbers->push_back(point.x);
		numbers->push_back(point.y);
	}

	return numbers;
}

string NIA::to_string(double num, int accuracy)
{
	string str = std::to_string(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

string NIA::to_string(float num, int accuracy)
{
	string str = std::to_string(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

vector<string>* NIA::to_string(vector<int>* nums)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_string(num));
	}

	return result;
}

vector<string>* NIA::to_string(vector<long>* nums)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_string(num));
	}

	return result;
}

vector<string>* NIA::to_string(vector<float>* nums, int accuracy)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(to_string(num, accuracy));
	}

	return result;
}

vector<string>* NIA::to_string(vector<double>* nums, int accuracy)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(to_string(num, accuracy));
	}

	return result;
}

vector<string>* NIA::to_string(vector<Point>* points, string separator)
{
	vector<string>* result = new vector<string>;

	for (auto& point : *points)
	{
		result->push_back(std::to_string(point.x) + separator + std::to_string(point.y));
	}

	return result;
}

vector<string>* NIA::to_string(vector<Point2D>* points, string separator, int accuracy)
{
	vector<string>* result = new vector<string>;

	for (auto& point : *points)
	{
		result->push_back(to_string(point.x, accuracy) + separator + to_string(point.y, accuracy));
	}

	return result;
}

wstring NIA::to_wstring(double num, int accuracy)
{
	wstring str = std::to_wstring(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

wstring NIA::to_wstring(float num, int accuracy)
{
	wstring str = std::to_wstring(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}


vector<wstring>* NIA::to_wstring(vector<int>* nums)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_wstring(num));
	}

	return result;
}

vector<wstring>* NIA::to_wstring(vector<long>* nums)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_wstring(num));
	}

	return result;
}

vector<wstring>* NIA::to_wstring(vector<float>* nums, int accuracy)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(to_wstring(num, accuracy));
	}

	return result;
}

vector<wstring>* NIA::to_wstring(vector<double>* nums, int accuracy)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(to_wstring(num, accuracy));
	}

	return result;
}

vector<wstring>* NIA::to_wstring(vector<Point>* points, wstring separator)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& point : *points)
	{
		result->push_back(std::to_wstring(point.x) + separator + std::to_wstring(point.y));
	}

	return result;
}

vector<wstring>* NIA::to_wstring(vector<Point2D>* points, wstring separator, int accuracy)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& point : *points)
	{
		result->push_back(to_wstring(point.x, accuracy) + separator + to_wstring(point.y, accuracy));
	}

	return result;
}

vector<string>* NIA::split(string str, char symbol)
{
	vector<string>* result = new vector<string>;
	string temp;

	for (size_t i = 0; i < str.length(); i++)
	{
		char current = str[i];

		if (current == symbol)
		{
			result->push_back(temp);
			temp.clear();
			temp = "";
		}
		else
		{
			temp += current;
		}
	}

	if (temp != "")
		result->push_back(temp);

	return result;
}

vector<string>* NIA::split(char* str, char symbol)
{
	string st_str(str);
	return NIA::split(st_str, symbol);
}



vector<string>* NIA::split(string str, string pattern, char separator)
{
	vector<string>* separators = split(pattern, separator);
	vector<string>* result = new vector<string>;
	string temp;
	bool is_sep = false;

	for (size_t i = 0; i < str.length(); i++)
	{
		char current = str[i];

		for (auto& separator : *separators)
		{
			if (current == separator[0])
			{
				is_sep = true;
			}
		}

		if (is_sep)
		{
			result->push_back(temp);
			temp.clear();
			temp = "";
			is_sep = false;
		}
		else
		{
			temp += current;
		}

	}

	if (temp != "")
		result->push_back(temp);

	return result;
}

vector<wstring>* NIA::split(wstring str, wchar_t symbol)
{
	vector<wstring>* result = new vector<wstring>;
	wstring temp;

	for (size_t i = 0; i < str.length(); i++)
	{
		wchar_t current = str[i];

		if (current == symbol)
		{
			result->push_back(temp);
			temp.clear();
			temp = L"";
		}
		else
		{
			temp += current;
		}
	}

	if (temp != L"")
		result->push_back(temp);

	return result;
}

vector<wstring>* NIA::split(wchar_t* str, wchar_t symbol)
{
	wstring st_str(str);
	return NIA::split(st_str, symbol);
}

vector<wstring>* NIA::split(wstring str, wstring pattern, wchar_t separator)
{
	vector<wstring>* separators = split(pattern, separator);
	vector<wstring>* result = new vector<wstring>;
	wstring temp;
	bool is_sep = false;

	for (size_t i = 0; i < str.length(); i++)
	{
		wchar_t current = str[i];

		for (auto& separator : *separators)
		{
			if (current == separator[0])
			{
				is_sep = true;
			}
		}

		if (is_sep)
		{
			result->push_back(temp);
			temp.clear();
			temp = L"";
			is_sep = false;
		}
		else
		{
			temp += current;
		}

	}

	if (temp != L"")
		result->push_back(temp);

	return result;
}

string NIA::join(vector<string>* strings, string separator)
{
	string result;

	for (auto& string : *strings)
	{
		result += string + separator;
	}

	return result;
}

wstring NIA::join(vector<wstring>* strings, wstring separator)
{
	wstring result;

	for (auto& string : *strings)
	{
		result += string + separator;
	}

	return result;
}

vector<Point>* Point::to_points(vector<int>* points)
{
	vector<Point>* result = new vector<Point>;


	if (points->size() % 2)
	{
		MessageBox(NULL, L" оличество координат не кратно 2, последн€€ координата будет удалена ", L"ѕредупреждение", MB_ICONINFORMATION);
		points->pop_back();
	}
	
	for (size_t i = 0; i < points->size(); i += 2)
	{
		result->push_back({ points->at(i), points->at(i + 1) });
	}

	return result;
}

Point Point2D::to_point()
{
	return Point((int)x, (int)y);
}

vector<Point2D>* Point2D::to_points(vector<double>* points)
{
	vector<Point2D>* result = new vector<Point2D>;


	if (points->size() % 2)
	{
		MessageBox(NULL, L" оличество координат не кратно 2, последн€€ координата будет удалена ", L"ѕредупреждение", MB_ICONINFORMATION);
		points->pop_back();
	}

	for (size_t i = 0; i < points->size(); i += 2)
	{
		result->push_back({ points->at(i), points->at(i + 1) });
	}

	return result;
}

HexColor NIA::rgb(HexColor bgr)
{
	HexColor rgb_color;

	HexColor r, g, b;

	r = (bgr & 0x000000ff) << 16;
	g = (bgr & 0x0000ff00);
	b = (bgr & 0x00ff0000) >> 16;

	rgb_color = r | g | b;

	return rgb_color;
}

HexColor NIA::rgb(unsigned char r, unsigned char g, unsigned char b)
{
	HexColor bgr_color;

	bgr_color = r | (g << 8) | (b << 16);

	return bgr_color;
}