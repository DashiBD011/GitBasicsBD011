#include"Functions.h"

/////////////////////////////// ќƒЌќћ≈–Ќџ… ћј——»¬ ///////////////////////////////////

/////////////////////////  ћј——»¬ INT /////////////////////
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;
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
void Shift(int arr[], const int n)
{
	int side;
	int number;
	cout << "¬ыберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "¬аш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "Ѕудем считать, что вы выбрали 1" << endl;
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
int Sum(int arr[], const int n)
{
	int sum_int = 0;
	for (int i = 0; i < n; i++)	sum_int += arr[i];
	return sum_int;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}

////////////////// ћј——»¬ DOUBLE //////////////////////
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = double(rand() % 10000) / 100;
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
void Shift(double arr[], const int n)
{
	int side;
	int number;
	cout << "¬ыберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "¬аш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "Ѕудем считать, что вы выбрали 2" << endl;
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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

double Sum(double arr[], const int n)
{
	double sum_double = 0;
	for (int i = 0; i < n; i++) sum_double += arr[i];
	return sum_double;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}

void FillRand(char arr[], const int n, int minrand, int maxrand)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % (maxrand - minrand) + minrand;
}

//////////////////////////// ћј——»¬ FLOAT ////////////////////////////////

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = float(rand() % 10000) / 100;
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
void Shift(float arr[], const int n)
{
	int side;
	int number;
	cout << "¬ыберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "¬аш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "Ѕудем считать, что вы выбрали 2" << endl;
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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

float Sum(float arr[], const int n)
{
	float sum_float = 0;
	for (int i = 0; i < n; i++) sum_float += arr[i];
	return sum_float;
}
float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)	if (min > arr[i]) min = arr[i];
	return min;
}
float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)	if (max < arr[i]) max = arr[i];
	return max;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout << "\n" << endl;
}

//////////////////////// ћј——»¬ CHAR ////////////////////////////////
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
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
char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

void Shift(char arr[], const int n)
{
	int side;
	int number;
	cout << "¬ыберите направление сдвига: \n1) - вправо;\n2) - влево." << endl;
	cout << "¬аш выбор: "; cin >> side;
	cout << "\n";

	if (side == 1)
	{
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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
		cout << "Ѕудем считать, что вы выбрали 2" << endl;
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
		cout << "¬ведите кол-во сдвигов: "; cin >> number; cout << "\n";
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

/////////////////////////////// ƒ¬”ћ≈–Ќџ… ћј——»¬ ///////////////////////////////////

//////////////// ћј——»¬ INT ////////////////
void FillRand(int arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
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
float Avg(int arr[m][b], const int m, const int b)
{
	return (float)Sum(arr, m, b) / (m * b);
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

//////////////// ћј——»¬ FLOAT ////////////////

void FillRand(float arr[m][b], const int m, const int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = float(rand() % 100) / 10;
		}
	}
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

float Avg(float arr[m][b], const int m, const int b)
{
	return Sum(arr, m, b) / (m * b);
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

//////////////////////////// ћј——»¬ DOUBLE //////////////////////////////////////////

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

double Avg(double arr[m][b], const int m, const int b)
{
	return Sum(arr, m, b) / (m * b);
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


//////////////////////// ћј——»¬ CHAR /////////////////////////////////

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