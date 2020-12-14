#include"Functions.h"

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
		cout << "Сортированный массив int: \n" << endl; Sort(arr, n); cout << endl;
		
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
		cout << "Сортированный массив double: \n" << endl; Sort(brr, n); cout << endl;
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
		cout << "Сортированный массив float: \n" << endl; Sort(drr, n); cout << endl;
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
		cout << "Сортированный массив char: \n" << endl; Sort(crr, n); cout << endl;
		Shift(crr, n); cout << "\n";
		//cout << "Сумма элементов одномерного массива char: " << (char)Sum(crr, n) << endl;
		cout << "Минимальное значение одномерного массива char: " << minValueIn(crr, n) << endl;
		cout << "Максимальное значение одномерного массива char: " << maxValueIn(crr, n) << endl;
#endif // ODNOMERNIY_ARRAYS
	}

	else if (arrays == 2)
	{
#ifdef DVUMERNIY_ARRAYS
		const int m = 5;
		const int b = 5;
		

		cout << "Двумерный массив int: " << endl;
		int A[m][b];
		FillRand(A, m, b);
		Print(A, m, b);
		cout << "Сумма элементов двумерного массива int: " << Sum(A, m, b) << endl;
		cout << "Среднее арифметическое двумерного массива int: " << Avg(A, m, b) << endl;
		cout << "Минимальное значение двумерного массива int: " << minValueIn(A, m, b) << endl;
		cout << "Максимальное значение двумерного массива int: " << maxValueIn(A, m, b) << endl;


		cout << "\n\nДвумерный массив float: " << endl;
		float B[m][b];
		FillRand(B, m, b);
		Print(B, m, b);
		cout << "Сумма элементов двумерного массива float: " << Sum(B, m, b) << endl;
		cout << "Среднее арифметическое двумерного массива float: " << Avg(B, m, b) << endl;
		cout << "Минимальное значение двумерного массива float: " << minValueIn(B, m, b) << endl;
		cout << "Максимальное значение двумерного массива float: " << maxValueIn(B, m, b) << endl;

		cout << "\n\nДвумерный массив double: " << endl;
		double C[m][b];
		FillRand(C, m, b);
		Print(C, m, b);
		cout << "Сумма элементов двумерного массива double: " << Sum(C, m, b) << endl;
		cout << "Среднее арифметическое двумерного массива double: " << Avg(C, m, b) << endl;
		cout << "Минимальное значение двумерного массива double: " << minValueIn(C, m, b) << endl;
		cout << "Максимальное значение двумерного массива double: " << maxValueIn(C, m, b) << endl;

		cout << "\n\nДвумерный массив char: " << endl;
		char D[m][b];
		FillRand(D, m, b);
		Print(D, m, b);
		cout << "Минимальное значение двумерного массива char: " << minValueIn(D, m, b) << endl;
		cout << "Максимальное значение двумерного массива char: " << maxValueIn(D, m, b) << endl;


#endif // DVUMERNIY_ARRAYS
	}


}


