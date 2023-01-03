#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	double a;
	char b;
	double c;
	
	cout << "¬ведите первое число"; cin >> a;
	cout << "¬ведите операцию"; cin >> b;
	if (b == '+')
	{
		cout << "¬ведите второе число"; cin >> c;
		cout << a + c; 
	}
	else if (b == '-')
	{
		cout << "¬ведите второе число"; cin >> c;
		cout << a - c;
	}
	else if (b == '*')
	{
		cout << "¬ведите второе число"; cin >> c;
		cout << a * c;
	}
	else if (b == '/')
	{
		cout << "¬ведите второе число"; cin >> c;
		cout << a / c;
	}

}