#include<iostream>
using namespace std;
//#define FACTORIAL
#define POWER

int factorial(int n)
{
	if (n == 0) return 1;
	return n * factorial(n - 1);
	/*int f = n * factorial(n - 1);
	return f;*/
}

int power(double a, int n)
{
	/*if (n == 0)return 1;
	if (n>0) return a * power(a, n - 1);
	else if (n > 0) return 1 / (a*power(a, n + 1));*/
	return (n == 0) ? 1 : (n > 0) ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
}

void Fibanachi(int a)
{
	static int a;
	if (d > a) return;
	static int b = 0;
	static int c = 1;
	�

}

void main()
{
	setlocale(LC_ALL,"");
#ifdef FACTORIAL
	int n;
	cout << "������� �����, ��� ���������� ����������: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL
	int a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " ^ " << n << " = " << power(a, n) << endl;
}