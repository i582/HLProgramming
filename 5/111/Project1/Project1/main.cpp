#include "windows.h"
#include "iostream"
using namespace std;

//############################################################################
//####  ����� �������� �������  ##############################################
//############################################################################

// ���������� ���������� � ������� ����� ���������� ����������� 
// � ������� ���������
int mlFromStart = 0;

// ���������� ������� ���������� ���� �� ������ �������
bool isCalcTime = true;


// ������� ������� ������� ����� � ����������� �����
void startCalcTime()
{
	// ����������� ����, ���� ������� �����
	while (isCalcTime)
	{
		// ��������� 1��
		mlFromStart++;

		// �������, ������� ���������������� ����������
		// �� 1 ��
		Sleep(1);
	}
}

// ������� ��������������� ���� �������
void stopCalcTime()
{
	// ������ ��� ���� � 0, �� ���� ������ ����������� ���� � 
	// startCalcTime �������� ���� ���������� 
	isCalcTime = false;
}

// ��� ������� ���������� ��� �������� ������ ����, � ���
// �� �������� ���� ������� �������� �������
DWORD WINAPI ThreadFunction(void* lpParameter)
{
	// �������� ������� �������� �������
	startCalcTime();
	return 0;
}

//############################################################################
//####  ����� ����������  ####################################################
//############################################################################


// ������� ����� ������� ����������
// ����� ���������, ����� �������� :) <- ��� ����, ����� ������ ���������������
void sort(int* mas) 
{ 
	for (size_t i = 0; i < 1000; i++)
	{
		Sleep(1);
	}
};

int main()
{
	// ������� �����, ���� ��� ��� ���������� �������, ��� ����, ��� �����
	// 3 ���������� ���� ��� ����� ������� ThreadFunction, ������� ��
	// ������ ����, ������ ����� ������������� ��� �������
	HANDLE thread = CreateThread(NULL, 0, ThreadFunction, NULL, 0, NULL);

	// �������� �������� � �����������
	// �������� ������, ������� ����������� ����� �����
	int mas[5] = { 2, 5, 6, 1, 9 };

	// ���������
	sort(mas);

	// ����� ���� ��� ���������� ������, �� ����������� ������� �����
	stopCalcTime();

	// ����������� ������� ������
	CloseHandle(thread);


	cout << "Sort time = " << mlFromStart << endl;
	return 0;
}