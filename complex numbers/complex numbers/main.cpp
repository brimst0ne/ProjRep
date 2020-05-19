#include "Complex.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Complex a;
	Complex b(1, 2);
	Complex c(b);
	Complex f;
	cout << " Конструкторы класса " << a << " " << b << " " << c << endl;
	c.set(3, 4);
	cout << " Set: " << c << endl;
	f = c.get();
	cout << " Get: " << f << endl;
	
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