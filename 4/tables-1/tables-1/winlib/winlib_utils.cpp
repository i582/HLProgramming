#include "winlib_utils.h"

using namespace std;


int winlib::Utils::to_integer(wstring str)
{
	return stoi(str);
}

int winlib::Utils::to_integer(string str)
{
	return stoi(str);
}

int winlib::Utils::to_integer(char* str)
{
	return atoi(str);
}

int winlib::Utils::to_integer(const char* str)
{
	return atoi(str);
}

vector<int>* winlib::Utils::to_integer(vector<wstring>* strings)
{
	vector<int>* numbers = new vector<int>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_integer(str));
	}

	return numbers;
}

vector<int>* winlib::Utils::to_integer(vector<string>* strings)
{
	vector<int>* numbers = new vector<int>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_integer(str));
	}

	return numbers;
}

long winlib::Utils::to_long(wstring str)
{
	return stol(str);
}

long winlib::Utils::to_long(string str)
{
	return stol(str);
}

long winlib::Utils::to_long(char* str)
{
	return atol(str);
}

long winlib::Utils::to_long(const char* str)
{
	return atol(str);
}

vector<long>* winlib::Utils::to_long(vector<wstring>* strings)
{
	vector<long>* numbers = new vector<long>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_long(str));
	}

	return numbers;
}

vector<long>* winlib::Utils::to_long(vector<string>* strings)
{
	vector<long>* numbers = new vector<long>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_long(str));
	}

	return numbers;
}

float winlib::Utils::to_float(wstring str)
{
	return (float)stof(str);
}

float winlib::Utils::to_float(string str)
{
	return (float)stof(str);
}

float winlib::Utils::to_float(char* str)
{
	return (float)atof(str);
}

float winlib::Utils::to_float(const char* str)
{
	return (float)atof(str);
}

vector<float>* winlib::Utils::to_float(vector<wstring>* strings)
{
	vector<float>* numbers = new vector<float>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_float(str));
	}

	return numbers;
}

vector<float>* winlib::Utils::to_float(vector<string>* strings)
{
	vector<float>* numbers = new vector<float>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_float(str));
	}

	return numbers;
}

double winlib::Utils::to_double(wstring str)
{
	return stod(str);
}

double winlib::Utils::to_double(string str)
{
	return stod(str);
}

double winlib::Utils::to_double(char* str)
{
	return atof(str);
}

double winlib::Utils::to_double(const char* str)
{
	return atof(str);
}

vector<double>* winlib::Utils::to_double(vector<wstring>* strings)
{
	vector<double>* numbers = new vector<double>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_double(str));
	}

	return numbers;
}

vector<double>* winlib::Utils::to_double(vector<string>* strings)
{
	vector<double>* numbers = new vector<double>;

	for (auto& str : *strings)
	{
		numbers->push_back(to_double(str));
	}

	return numbers;
}

string winlib::Utils::to_string(double num, int accuracy)
{
	string str = std::to_string(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

string winlib::Utils::to_string(float num, int accuracy)
{
	string str = std::to_string(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

vector<string>* winlib::Utils::to_string(vector<int>* nums)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_string(num));
	}

	return result;
}

vector<string>* winlib::Utils::to_string(vector<long>* nums)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_string(num));
	}

	return result;
}

vector<string>* winlib::Utils::to_string(vector<float>* nums, int accuracy)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(to_string(num, accuracy));
	}

	return result;
}

vector<string>* winlib::Utils::to_string(vector<double>* nums, int accuracy)
{
	vector<string>* result = new vector<string>;

	for (auto& num : *nums)
	{
		result->push_back(to_string(num, accuracy));
	}

	return result;
}

wstring winlib::Utils::to_wstring(double num, int accuracy)
{
	wstring str = std::to_wstring(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

wstring winlib::Utils::to_wstring(float num, int accuracy)
{
	wstring str = std::to_wstring(num);
	return str.substr(0, str.find('.') + accuracy + 1);
}

wstring winlib::Utils::to_wstring(string str)
{
	setlocale(LC_ALL, "ru-RU.utf-8");

	wstring wstr;
	wstr.resize(str.length());

	mbstowcs(&wstr[0], &str[0], str.length());

	return wstr;
}


vector<wstring>* winlib::Utils::to_wstring(vector<int>* nums)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_wstring(num));
	}

	return result;
}

vector<wstring>* winlib::Utils::to_wstring(vector<long>* nums)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(std::to_wstring(num));
	}

	return result;
}

vector<wstring>* winlib::Utils::to_wstring(vector<float>* nums, int accuracy)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(to_wstring(num, accuracy));
	}

	return result;
}

vector<wstring>* winlib::Utils::to_wstring(vector<double>* nums, int accuracy)
{
	vector<wstring>* result = new vector<wstring>;

	for (auto& num : *nums)
	{
		result->push_back(to_wstring(num, accuracy));
	}

	return result;
}

vector<string>* winlib::Utils::split(string str, char symbol)
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

vector<string>* winlib::Utils::split(char* str, char symbol)
{
	string st_str(str);
	return winlib::Utils::split(st_str, symbol);
}



vector<string>* winlib::Utils::split(string str, string pattern, char separator)
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

vector<wstring>* winlib::Utils::split(wstring str, wchar_t symbol)
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

vector<wstring>* winlib::Utils::split(wchar_t* str, wchar_t symbol)
{
	wstring st_str(str);
	return winlib::Utils::split(st_str, symbol);
}

vector<wstring>* winlib::Utils::split(wstring str, wstring pattern, wchar_t separator)
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

string winlib::Utils::join(vector<string>* strings, string separator)
{
	string result;

	for (auto& string : *strings)
	{
		result += string + separator;
	}

	return result;
}

wstring winlib::Utils::join(vector<wstring>* strings, wstring separator)
{
	wstring result;

	for (auto& string : *strings)
	{
		result += string + separator;
	}

	return result;
}

bool winlib::Utils::is_number(string str)
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

bool winlib::Utils::is_number(const char* str)
{
	string str1(str);
	return is_number(str1);
}

bool winlib::Utils::is_number(wstring str)
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

bool winlib::Utils::is_number(const wchar_t* str)
{
	wstring str1(str);
	return is_number(str1);
}