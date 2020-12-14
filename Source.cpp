#include"Functions.h"

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
		cout << "������������� ������ int: \n" << endl; Sort(arr, n); cout << endl;
		
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
		cout << "������������� ������ double: \n" << endl; Sort(brr, n); cout << endl;
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
		cout << "������������� ������ float: \n" << endl; Sort(drr, n); cout << endl;
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
		cout << "������������� ������ char: \n" << endl; Sort(crr, n); cout << endl;
		Shift(crr, n); cout << "\n";
		//cout << "����� ��������� ����������� ������� char: " << (char)Sum(crr, n) << endl;
		cout << "����������� �������� ����������� ������� char: " << minValueIn(crr, n) << endl;
		cout << "������������ �������� ����������� ������� char: " << maxValueIn(crr, n) << endl;
#endif // ODNOMERNIY_ARRAYS
	}

	else if (arrays == 2)
	{
#ifdef DVUMERNIY_ARRAYS
		const int m = 5;
		const int b = 5;
		

		cout << "��������� ������ int: " << endl;
		int A[m][b];
		FillRand(A, m, b);
		Print(A, m, b);
		cout << "����� ��������� ���������� ������� int: " << Sum(A, m, b) << endl;
		cout << "������� �������������� ���������� ������� int: " << Avg(A, m, b) << endl;
		cout << "����������� �������� ���������� ������� int: " << minValueIn(A, m, b) << endl;
		cout << "������������ �������� ���������� ������� int: " << maxValueIn(A, m, b) << endl;


		cout << "\n\n��������� ������ float: " << endl;
		float B[m][b];
		FillRand(B, m, b);
		Print(B, m, b);
		cout << "����� ��������� ���������� ������� float: " << Sum(B, m, b) << endl;
		cout << "������� �������������� ���������� ������� float: " << Avg(B, m, b) << endl;
		cout << "����������� �������� ���������� ������� float: " << minValueIn(B, m, b) << endl;
		cout << "������������ �������� ���������� ������� float: " << maxValueIn(B, m, b) << endl;

		cout << "\n\n��������� ������ double: " << endl;
		double C[m][b];
		FillRand(C, m, b);
		Print(C, m, b);
		cout << "����� ��������� ���������� ������� double: " << Sum(C, m, b) << endl;
		cout << "������� �������������� ���������� ������� double: " << Avg(C, m, b) << endl;
		cout << "����������� �������� ���������� ������� double: " << minValueIn(C, m, b) << endl;
		cout << "������������ �������� ���������� ������� double: " << maxValueIn(C, m, b) << endl;

		cout << "\n\n��������� ������ char: " << endl;
		char D[m][b];
		FillRand(D, m, b);
		Print(D, m, b);
		cout << "����������� �������� ���������� ������� char: " << minValueIn(D, m, b) << endl;
		cout << "������������ �������� ���������� ������� char: " << maxValueIn(D, m, b) << endl;


#endif // DVUMERNIY_ARRAYS
	}


}


