#include<iostream>
using namespace std;

const int ROWS = 4;	//���������� ����� ���������� �������
const int COLS = 5;	//���������� ��������� ������

template<typename T>void FillRand(T Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T  Sum(T Arr[], const int n);

template<typename T>double Avg(T Arr[], const int n);

//template<typename T>T  minValueIn(int Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	cout << "����� ��������� ������:\t" << Sum(Arr, n) << endl;
	cout << "������� ��������������:\t" << Avg(Arr, n) << endl;
	//cout << "����������� �������� � �������:\t" << minValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);

	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
}


template<typename T>void FillRand(T Arr[], const int n)
{
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void FillRand(double Arr[], const int n)
{
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(T Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}


void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>void Sort(T Arr[], const int n)
{
	//���������� �������:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
}

template<typename T>T  Sum(T Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

template<typename T>double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

/*template<typename T>int  minValueIn(T Arr[], const int n)
{
	int min = Arr[0];
	for( )
}*/