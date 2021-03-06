#include"Functions.h"

/////////////////////////////// ���������� ������ ///////////////////////////////////

/////////////////////////  ������ INT /////////////////////
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
	cout << "�������� ����������� ������: \n1) - ������;\n2) - �����." << endl;
	cout << "��� �����: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "����� �������, ��� �� ������� 1" << endl;
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
	cout << "�������� ����������� ������: \n1) - ������;\n2) - �����." << endl;
	cout << "��� �����: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "����� �������, ��� �� ������� 2" << endl;
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
	cout << "�������� ����������� ������: \n1) - ������;\n2) - �����." << endl;
	cout << "��� �����: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "����� �������, ��� �� ������� 2" << endl;
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
	cout << "�������� ����������� ������: \n1) - ������;\n2) - �����." << endl;
	cout << "��� �����: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
		cout << "����� �������, ��� �� ������� 2" << endl;
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
		cout << "������� ���-�� �������: "; cin >> number; cout << "\n";
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
	return Sum(arr, m, b) / (m * b);
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