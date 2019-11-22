#include "NIA.h"

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

wstring NIA::to_wstring(string str)
{
	setlocale(LC_ALL, "ru-RU.utf-8");

	wstring wstr;
	wstr.resize(str.length());

	mbstowcs(&wstr[0], &str[0], str.length());

	return wstr;
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
		}
		else
		{
			temp += current;
		}
	}

	if (!temp.empty())
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
			is_sep = false;
		}
		else
		{
			temp += current;
		}

	}

	if (!temp.empty())
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
		}
		else
		{
			temp += current;
		}
	}

	if (!temp.empty())
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
		MessageBox(NULL, L"���������� ��������� �� ������ 2, ��������� ���������� ����� ������� ", L"��������������", MB_ICONINFORMATION);
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
		MessageBox(NULL, L"���������� ��������� �� ������ 2, ��������� ���������� ����� ������� ", L"��������������", MB_ICONINFORMATION);
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

bool NIA::is_number(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str.at(i) < '0' || str.at(i) > '9')
		{
			return false;
		}
	}

	return true;
}

bool NIA::is_number(const char* str)
{
	string str1(str);
	return is_number(str1);
}

bool NIA::is_number(wstring str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str.at(i) < L'0' || str.at(i) > L'9')
		{
			return false;
		}
	}

	return true;
}

bool NIA::is_number(const wchar_t* str)
{
	wstring str1(str);
	return is_number(str1);
}
