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

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[m][b], const int m, const int b);
void Print(float arr[m][b], const int m, const int b);
void Print(double arr[m][b], const int m, const int b);
void Print(char arr[m][b], const int m, const int b);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[m][b], const int m, const int b);
void Sort(float arr[m][b], const int m, const int b);
void Sort(double arr[m][b], const int m, const int b);
void Sort(char arr[m][b], const int m, const int b);

void Shift(int arr[], const int n);
void Shift(double arr[], const int n);
void Shift(float arr[], const int n);
void Shift(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[m][b], const int m, const int b);
float Sum(float arr[m][b], const int m, const int b);
double Sum(double arr[m][b], const int m, const int b);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
float Avg(int arr[m][b], const int m, const int b);
float Avg(float arr[m][b], const int m, const int b);
double Avg(double arr[m][b], const int m, const int b);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(int arr[m][b], const int m, const int b);
float minValueIn(float arr[m][b], const int m, const int b);
char minValueIn(char arr[m][b], const int m, const int b);
double minValueIn(double arr[m][b], const int m, const int b);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[m][b], const int m, const int b);
float maxValueIn(float arr[m][b], const int m, const int b);
double maxValueIn(double arr[m][b], const int m, const int b);
char maxValueIn(char arr[m][b], const int m, const int b);

void Uniq(int arr[m][b], const int m, const int b);
void Uniq(float arr[m][b], const int m, const int b);
void Uniq(double arr[m][b], const int m, const int b);

#define ODNOMERNIY_ARRAYS
#define DVUMERNIY_ARRAYS


void main()
{
	setlocale(LC_ALL, "");
	int arrays;
	cout << "Выберите нужный массив:\n1)Одномерный;\n2)Двумерный;\n"; 
	cout << "Массив - "; cin >> arrays;
	cout << "\n";
	if (arrays == 1)
	{
#ifdef ODNOMERNIY_ARRAYS
		const int n = 5;
		cout << "Одномерный массив int: \n" << endl;
		int arr[n];
		FillRand(arr, n);
		Print(arr, n);
		cout << "Отсортированный массив int: \n" << endl; Sort(arr, n); cout << endl;
		Shift(arr, n); cout << "\n";
		cout << "Сумма элементов одномерного массива int: " << Sum(arr, n) << endl;
		cout << "Среднее арифметическое одномерного массива int: " << Avg(arr, n) << endl;
		cout << "Минимальное значение одномерного массива int: " << minValueIn(arr, n) << endl;
		cout << "Максимальное значение одномерного массива int: " << maxValueIn(arr, n) << endl;

		cout << "===================================================================" << endl;

		cout << "\nОдномерный массив double:\n" << endl;
		double brr[n];
		FillRand(brr, n);
		Print(brr, n);
		cout << "Отсортированный массив double: \n" << endl; Sort(brr, n); cout << endl;
		Shift(brr, n); cout << "\n";
		cout << "Сумма элементов одномерного массива double: " << Sum(brr, n) << endl;
		cout << "Среднее арифметическое одномерного массива double: " << Avg(brr, n) << endl;
		cout << "Минимальное значение одномерного массива double: " << minValueIn(brr, n) << endl;
		cout << "Максимальное значение одномерного массива double: " << maxValueIn(brr, n) << endl;
		
		cout << "===================================================================" << endl;

		cout << "\nОдномерный массив float:\n" << endl;
		float drr[n];
		FillRand(drr, n);
		Print(drr, n);
		cout << "Отсортированный массив float: \n" << endl; Sort(drr, n); cout << endl;
		Shift(drr, n); cout << "\n";
		cout << "Сумма элементов одномерного массива float: " << Sum(drr, n) << endl;
		cout << "Среднее арифметическое одномерного массива float: " << Avg(drr, n) << endl;
		cout << "Минимальное значение одномерного массива float: " << minValueIn(drr, n) << endl;
		cout << "Максимальное значение одномерного массива float: " << maxValueIn(drr, n) << endl;

		cout << "===================================================================" << endl;

		cout << "\nОдномерный массив char:\n" << endl;
		char crr[n];
		FillRand(crr, n);
		Print(crr, n);
		cout << "Отсортированный массив char: \n" << endl; Sort(crr, n); cout << endl;
		Shift(crr, n); cout << "\n";
		//cout << "Сумма элементов одномерного массива char: " << (char)Sum(crr, n) << endl;
		cout << "Минимальное значение одномерного массива char: " << minValueIn(crr, n) << endl;
		cout << "Максимальное значение одномерного массива char: " << maxValueIn(crr, n) << endl;
#endif // ODNOMERNIY_ARRAYS
	}

	else if (arrays == 2)
	{
#ifdef DVUMERNIY_ARRAYS
		
		cout << "Двумерный массив int: " << endl;
		int A[m][b];
		FillRand(A, m, b);
		Print(A, m, b);
		cout << "Массив с уникальными значениями: " << endl;
		Uniq(A, m, b);
		cout << "Отсортированный массив: " << endl;
		Sort(A, m, b);
		Print(A, m, b);
		cout << "Сумма элементов двумерного массива int: " << Sum(A, m, b) << endl;
		cout << "Среднее арифметическое двумерного массива int: " << Avg(A, m, b) << endl;
		cout << "Минимальное значение двумерного массива int: " << minValueIn(A, m, b) << endl;
		cout << "Максимальное значение двумерного массива int: " << maxValueIn(A, m, b) << endl;


		cout << "\n\nДвумерный массив float: " << endl;
		float B[m][b];
		FillRand(B, m, b);
		Print(B, m, b);
		cout << "Массив с уникальными значениями: " << endl;
		Uniq(B, m, b);
		cout << "Отсортированный массив: " << endl;
		Sort(B, m, b);
		Print(B, m, b);
		cout << "Сумма элементов двумерного массива float: " << Sum(B, m, b) << endl;
		cout << "Среднее арифметическое двумерного массива float: " << Avg(B, m, b) << endl;
		cout << "Минимальное значение двумерного массива float: " << minValueIn(B, m, b) << endl;
		cout << "Максимальное значение двумерного массива float: " << maxValueIn(B, m, b) << endl;

		cout << "\n\nДвумерный массив double: " << endl;
		double C[m][b];
		FillRand(C, m, b);
		Print(C, m, b);
		cout << "Массив с уникальными значениями: " << endl;
		Uniq(C, m, b);
		cout << "Отсортированный массив: " << endl;
		Sort(C, m, b);
		Print(C, m, b);
		cout << "Сумма элементов двумерного массива double: " << Sum(C, m, b) << endl;
		cout << "Среднее арифметическое двумерного массива double: " << Avg(C, m, b) << endl;
		cout << "Минимальное значение двумерного массива double: " << minValueIn(C, m, b) << endl;
		cout << "Максимальное значение двумерного массива double: " << maxValueIn(C, m, b) << endl;

		cout << "\n\nДвумерный массив char: " << endl;
		char D[m][b];
		FillRand(D, m, b);
		Print(D, m, b);
		cout << "Отсортированный массив: " << endl;
		Sort(D, m, b);
		Print(D, m, b);
		cout << "Минимальное значение двумерного массива char: " << minValueIn(D, m, b) << endl;
		cout << "Максимальное значение двумерного массива char: " << maxValueIn(D, m, b) << endl;


#endif // DVUMERNIY_ARRAYS
	}


}

/////////////////////////////// ОДНОМЕРНЫЙ МАССИВ ///////////////////////////////////

/////////////////////////  МАССИВ INT /////////////////////
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
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(float arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = float(rand() % 1000) / 10;
		}
	}
}

void FillRand(double arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = double(rand() % 100) / 10;
		}
	}
}

void FillRand(char arr[m][b], const int m, const int b, int minrand, int maxrand)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = rand() % (maxrand - minrand) + minrand;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[m][b], const int m, const int b)
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

void Print(float arr[m][b], const int m, const int b)
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

void Print(double arr[m][b], const int m, const int b)
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

void Print(char arr[m][b], const int m, const int b)
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

void Sort(int arr[], const int n)
{
	int buffer;
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

void Sort(double arr[], const int n)
{
	double buffer;
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

void Sort(float arr[], const int n)
{
	float buffer;
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

void Sort(char arr[], const int n)
{
	char buffer;
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

void Sort(int arr[m][b], const int m, const int b)
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
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(float arr[m][b], const int m, const int b)
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
						float buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[m][b], const int m, const int b)
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
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[m][b], const int m, const int b)
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
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Shift(int arr[], const int n)
{
	int number;
	int side;
	cout << "Выберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "Ваш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else if (side == 2)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else
	{
		cout << "Будем считать, что вы выбрали 1" << endl;
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}
}

void Shift(double arr[], const int n)
{
	int number;
	int side;
	cout << "Выберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "Ваш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			double buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else if (side == 2)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			double buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else
	{
		cout << "Будем считать, что вы выбрали 2" << endl;
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			double buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}
}

void Shift(float arr[], const int n)
{
	int number;
	int side;
	cout << "Выберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "Ваш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			float buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else if (side == 2)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			float buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else
	{
		cout << "Будем считать, что вы выбрали 2" << endl;
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			float buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}
}

void Shift(char arr[], const int n)
{
	int number;
	int side;
	cout << "Выберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "Ваш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			char buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
			arr[0] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else if (side == 2)
	{
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			char buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}

	else
	{
		cout << "Будем считать, что вы выбрали 2" << endl;
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		cout << "Введите кол-во сдвигов: "; cin >> number; cout << "\n";
		for (int i = 0; i < number; i++)
		{
			char buffer = arr[0];
			for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
			arr[n - 1] = buffer;
		}
		for (int i = 0; i < n; i++) cout << arr[i] << "\t";
		cout << endl;
	}
}

int Sum(int arr[], const int n)
{
	int sum_int = 0;
	for (int i = 0; i < n; i++)	sum_int += arr[i];
	return sum_int;
}

double Sum(double arr[], const int n)
{
	double sum_double = 0;
	for (int i = 0; i < n; i++) sum_double += arr[i];
	return sum_double;
}

float Sum(float arr[], const int n)
{
	float sum_float = 0;
	for (int i = 0; i < n; i++) sum_float += arr[i];
	return sum_float;
}

int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
}

int Sum(int arr[m][b], const int m, const int b)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

float Sum(float arr[m][b], const int m, const int b)
{
	float sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Sum(double arr[m][b], const int m, const int b)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}

float Avg(int arr[m][b], const int m, const int b)
{
	return (float)Sum(arr, m, b) / (m * b);
}

float Avg(float arr[m][b], const int m, const int b)
{
	return Sum(arr, m, b) / (m * b);
}

double Avg(double arr[m][b], const int m, const int b)
{
	return Sum(arr, m, b) / (double(m) * b);
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}

char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int minValueIn(int arr[m][b], const int m, const int b)
{
	int min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

float minValueIn(float arr[m][b], const int m, const int b)
{
	float min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

double minValueIn(double arr[m][b], const int m, const int b)
{
	double min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

char minValueIn(char arr[m][b], const int m, const int b)
{
	char min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}

float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}

char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[m][b], const int m, const int b)
{
	int max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

float maxValueIn(float arr[m][b], const int m, const int b)
{
	float max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

double maxValueIn(double arr[m][b], const int m, const int b)
{
	double max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

char maxValueIn(char arr[m][b], const int m, const int b)
{
	char max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

void Uniq(int arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % 100;
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
void Uniq(float arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = float(rand() % 1000) / 10;
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
void Uniq(double arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = double(rand() % 1000) / 10;
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
