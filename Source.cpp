#pragma once
#include<iostream>

using namespace std;

using std::cout;
using std::cin;

const int m = 5;
const int b = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n, int minrand = 48, int maxrand = 57);
void FillRand(int arr[m][b], const int m, const int b);
void FillRand(float arr[m][b], const int m, const int b);
void FillRand(double arr[m][b], const int m, const int b);
void FillRand(char arr[m][b], const int m, const int b, int minrand = 48, int maxrand = 57);

template<typename T> void Print(T arr[], const int n);
template<typename T> void Print(T arr[m][b], const int m, const int b);

template<typename T> void Sort(T arr[], const int n);
template<typename T> void Sort(T arr[m][b], const int m, const int b);

template<typename T> void Shift(T arr[], const int n);

template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[m][b], const int m, const int b);

template<typename T> T Avg(T arr[], const int n);
template<typename T> T Avg(T arr[m][b], const int m, const int b);

template<typename T> T minValueIn(T arr[], const int n);
template<typename T> T minValueIn(T arr[m][b], const int m, const int b);

template<typename T> T maxValueIn(T arr[], const int n);
template<typename T> T maxValueIn(T arr[m][b], const int m, const int b);

template<typename T> void Uniq(T arr[m][b], const int m, const int b);


#define ODNOMERNIY_ARRAYS
#define DVUMERNIY_ARRAYS


void main()
{
	setlocale(LC_ALL, "");
	int arrays;
	cout << "�������� ������ ������:\n1)����������;\n2)���������;\n"; 
	cout << "������ - "; cin >> arrays;
	cout << "\n";
	if (arrays == 1)
	{
#ifdef ODNOMERNIY_ARRAYS
		const int n = 5;
		cout << "���������� ������ int: \n" << endl;
		int arr[n];
		FillRand(arr, n);
		Print(arr, n);
		cout << "��������������� ������ int: \n" << endl; Sort(arr, n); cout << endl;
		Shift(arr, n); cout << "\n";
		cout << "����� ��������� ����������� ������� int: " << Sum(arr, n) << endl;
		cout << "������� �������������� ����������� ������� int: " << Avg(arr, n) << endl;
		cout << "����������� �������� ����������� ������� int: " << minValueIn(arr, n) << endl;
		cout << "������������ �������� ����������� ������� int: " << maxValueIn(arr, n) << endl;

		cout << "===================================================================" << endl;

		cout << "\n���������� ������ double:\n" << endl;
		double brr[n];
		FillRand(brr, n);
		Print(brr, n);
		cout << "��������������� ������ double: \n" << endl; Sort(brr, n); cout << endl;
		Shift(brr, n); cout << "\n";
		cout << "����� ��������� ����������� ������� double: " << Sum(brr, n) << endl;
		cout << "������� �������������� ����������� ������� double: " << Avg(brr, n) << endl;
		cout << "����������� �������� ����������� ������� double: " << minValueIn(brr, n) << endl;
		cout << "������������ �������� ����������� ������� double: " << maxValueIn(brr, n) << endl;
		
		cout << "===================================================================" << endl;

		cout << "\n���������� ������ float:\n" << endl;
		float drr[n];
		FillRand(drr, n);
		Print(drr, n);
		cout << "��������������� ������ float: \n" << endl; Sort(drr, n); cout << endl;
		Shift(drr, n); cout << "\n";
		cout << "����� ��������� ����������� ������� float: " << Sum(drr, n) << endl;
		cout << "������� �������������� ����������� ������� float: " << Avg(drr, n) << endl;
		cout << "����������� �������� ����������� ������� float: " << minValueIn(drr, n) << endl;
		cout << "������������ �������� ����������� ������� float: " << maxValueIn(drr, n) << endl;

		cout << "===================================================================" << endl;

		cout << "\n���������� ������ char:\n" << endl;
		char crr[n];
		FillRand(crr, n);
		Print(crr, n);
		cout << "��������������� ������ char: \n" << endl; Sort(crr, n); cout << endl;
		Shift(crr, n); cout << "\n";
		//cout << "����� ��������� ����������� ������� char: " << (char)Sum(crr, n) << endl;
		cout << "����������� �������� ����������� ������� char: " << minValueIn(crr, n) << endl;
		cout << "������������ �������� ����������� ������� char: " << maxValueIn(crr, n) << endl;
#endif // ODNOMERNIY_ARRAYS
	}

	else if (arrays == 2)
	{
#ifdef DVUMERNIY_ARRAYS
		
		cout << "��������� ������ int: " << endl;
		int A[m][b];
		FillRand(A, m, b);
		Print(A, m, b);
		cout << "������ � ����������� ����������: " << endl;
		Uniq(A, m, b);
		cout << "��������������� ������: " << endl;
		Sort(A, m, b);
		Print(A, m, b);
		cout << "����� ��������� ���������� ������� int: " << Sum(A, m, b) << endl;
		cout << "������� �������������� ���������� ������� int: " << Avg(A, m, b) << endl;
		cout << "����������� �������� ���������� ������� int: " << minValueIn(A, m, b) << endl;
		cout << "������������ �������� ���������� ������� int: " << maxValueIn(A, m, b) << endl;


		cout << "\n\n��������� ������ float: " << endl;
		float B[m][b];
		FillRand(B, m, b);
		Print(B, m, b);
		cout << "������ � ����������� ����������: " << endl;
		Uniq(B, m, b);
		cout << "��������������� ������: " << endl;
		Sort(B, m, b);
		Print(B, m, b);
		cout << "����� ��������� ���������� ������� float: " << Sum(B, m, b) << endl;
		cout << "������� �������������� ���������� ������� float: " << Avg(B, m, b) << endl;
		cout << "����������� �������� ���������� ������� float: " << minValueIn(B, m, b) << endl;
		cout << "������������ �������� ���������� ������� float: " << maxValueIn(B, m, b) << endl;

		cout << "\n\n��������� ������ double: " << endl;
		double C[m][b];
		FillRand(C, m, b);
		Print(C, m, b);
		cout << "������ � ����������� ����������: " << endl;
		Uniq(C, m, b);
		cout << "��������������� ������: " << endl;
		Sort(C, m, b);
		Print(C, m, b);
		cout << "����� ��������� ���������� ������� double: " << Sum(C, m, b) << endl;
		cout << "������� �������������� ���������� ������� double: " << Avg(C, m, b) << endl;
		cout << "����������� �������� ���������� ������� double: " << minValueIn(C, m, b) << endl;
		cout << "������������ �������� ���������� ������� double: " << maxValueIn(C, m, b) << endl;

		cout << "\n\n��������� ������ char: " << endl;
		char D[m][b];
		FillRand(D, m, b);
		Print(D, m, b);
		cout << "��������������� ������: " << endl;
		Sort(D, m, b);
		Print(D, m, b);
		cout << "����������� �������� ���������� ������� char: " << minValueIn(D, m, b) << endl;
		cout << "������������ �������� ���������� ������� char: " << maxValueIn(D, m, b) << endl;


#endif // DVUMERNIY_ARRAYS
	}


}


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = double(rand() % 10000) / 100;
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = float(rand() % 10000) / 100;
}

void FillRand(char arr[], const int n, int minrand, int maxrand)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % (maxrand - minrand) + minrand;
}

void FillRand(int arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)	arr[i][j] = rand() % 100;
	}
}

void FillRand(float arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)	arr[i][j] = float(rand() % 1000) / 10;
	}
}

void FillRand(double arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)	arr[i][j] = double(rand() % 100) / 10;
	}
}

void FillRand(char arr[m][b], const int m, const int b, int minrand, int maxrand)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)	arr[i][j] = rand() % (maxrand - minrand) + minrand;
	}
}


template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}


template<typename T>
void Print(T arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}


template<typename T>
void Sort(T arr[], const int n)
{
	T buffer;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
		cout << arr[i] << "\t";
	}
	cout << endl;
}


template<typename T>
void Sort(T arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int k = i; k < m; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < b; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

template<typename T>
void Shift(T arr[], const int n)
{
	int number;
	int side;
	cout << "�������� ����������� ������: \n1) - ������;\n2) - �����." << endl;
	cout << "��� �����: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			T buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else if (side == 2)
	{
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			T buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else
	{
		cout << "����� �������, ��� �� ������� 1" << endl;
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			T buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}
}




template<typename T>
T Sum(T arr[], const int n)
{
	T sum_int = 0;
	for (int i = 0; i < n; i++)	sum_int += arr[i];
	return sum_int;
}



template<typename T>
T Sum(T arr[m][b], const int m, const int b)
{
	T sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>
T Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}


template<typename T>
T Avg(T arr[m][b], const int m, const int b)
{
	return (float)Sum(arr, m, b) / (m * b);
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}


template<typename T>
T minValueIn(T arr[m][b], const int m, const int b)
{
	T min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}


template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}

template<typename T>
T maxValueIn(T arr[m][b], const int m, const int b)
{
	T max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}


template<typename T>
void Uniq(T arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = T(rand() % 1000)/10;
				unique = true;
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; l < j; l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
				}

			} while (!unique);
			
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
