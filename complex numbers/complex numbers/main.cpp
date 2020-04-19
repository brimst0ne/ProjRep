#include "Complex.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Complex a;
	Complex b(1, 2);
	Complex c(b);
	cout << a << " " << b << " " << c << " Конструкторы класса" << endl;
	c.set(3, 4);
	cout << c.get() << " Set и Get " << endl;
	Complex d;
	d = a + b;
	cout << d << " + " << endl;
	d = d - b;
	cout << d << " - " << endl;
	d = c * b;
	cout << d << " * " << endl;
	d = c / b;
	cout << " / " << d << endl;
	d = b;
	cout << d << " = " << endl;
	cout << (d == b) << " == " << endl;
	cout << (a == b) << " == " << endl;

	Complex r;
	cin >> r;
	cout << r << " cin>> " << endl;

	return 0;
}