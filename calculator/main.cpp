#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	double a;
	char b;
	double c;
	
	cout << "������� ������ �����"; cin >> a;
	cout << "������� ��������"; cin >> b;
	if (b == '+')
	{
		cout << "������� ������ �����"; cin >> c;
		cout << a + c; 
	}
	else if (b == '-')
	{
		cout << "������� ������ �����"; cin >> c;
		cout << a - c;
	}
	else if (b == '*')
	{
		cout << "������� ������ �����"; cin >> c;
		cout << a * c;
	}
	else if (b == '/')
	{
		cout << "������� ������ �����"; cin >> c;
		cout << a / c;
	}

}