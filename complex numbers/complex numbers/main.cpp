#include "Complex.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Complex a;
	Complex b(1, 2);
	Complex c(b);

	cout << " Конструкторы класса " << a << " " << b << " " << c << endl;
	c.set(3, 4);
	cout << " Set: " << c << endl;
	
	cout << " Get: " << c.getRe() << "+" << c.getIm() << "i" << endl;
	
	Complex d;
	d = a + b;
	cout << " Сложение: " << d << endl;
	d = d - b;
	cout << " Вычитание: " << d << endl;
	d = c * b;
	cout << " Умножение: " << d << endl;
	d = c / b;
	cout << " Деление: " << d << endl;
	d = b;
	cout << " Присваивание: " << d << endl;
	
	cout << " Сравнение: " << (d == b) << endl;
	cout << " Сравнение: " << (a == b) << endl;

	Complex r;
	cin >> r;
	cout << " Потоковый ввод: " << r << endl;

	return 0;
}