#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "String.h"
#include <array>
#include <string.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	MyString a;
	MyString b("unzial_const");
	MyString c(b);
	cout << b.get_s() << " Доступ к полю" << endl;
	cout << c.get_s() << " Доступ к полю" << endl;
	c.set_s("Доступ к полю");
	cout << c << endl;
	MyString d;
	d = b + c;
	cout << d << " operator +" << endl;
	MyString e("sdsdsds");
	MyString f("sdsdsds");
	cout << (f == e) << " operator ==" << endl;
	cout << (b == c) << " operator ==" << endl;
	e.set_s("sdsd");
	f.set_s("s");
	cout << (e < f) << " operator <" << endl;
	cout << (f > e) << " operator >" << endl;
	cout << f[0] << " operator []" << endl;

	cin >> a;
	cout << b.find("_c") << endl;
	cout << b.find_c("z") << endl;
	b.Cstrtok("_");
	return 0;
}