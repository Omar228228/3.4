// Laboratorna 3.4.cpp 
// Ткачишин Юрій
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>

using namespace std;

int main()
{
	double R; // радіус кола
	double a; // Довжина прямокутника
	double b; // висота прямокутника
	double x; // вхідний аргумент
	double y; // вхідний параметр


	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;


	// розгалуження в повній формі
	if ((a > R && b < R) && (y * y <= (R * R) - (x * x) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
		(y * y > ((R * R) - (x * x)) && y <= b && y > 0 && x < R && x <= a))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}