#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
	Re = 0;
	Im = 0;
}

Complex::Complex(double a, double b)
{
	Re = a;
	Im = b;
}

Complex::Complex(Complex& A)
{
	Re = A.Re;
	Im = A.Im;
}

void Complex::set(double a, double b)
{
	Re = a;
	Im = b;
}

Complex Complex::get()
{
	Complex c(Re, Im);
	return c;
}

Complex operator + (Complex& a, Complex& b)
{

	return Complex(a.Re + b.Re, a.Im + b.Im);
}

Complex operator * (Complex& a, Complex& b)
{
	Complex c;
	c.Re = a.Re * b.Re - a.Im * b.Im;
	c.Im = a.Re * b.Im + b.Re * a.Im;
	return c;
}

Complex operator - (Complex& a, Complex& b)
{
	Complex c;
	c.Re = a.Re - b.Re;
	c.Im = a.Im - b.Im;
	return c;
}

Complex operator / (Complex& a, Complex& b)
{
	Complex c;
	c.Re = (a.Re * b.Re + a.Im * b.Im) / (b.Re * b.Re + b.Im * b.Im);
	c.Im = (b.Re * a.Im - a.Re * b.Im) / (b.Re * b.Re + b.Im * b.Im);
	return c;
}

Complex& Complex:: operator =(const Complex& a)
{
	Re = a.Re;
	Im = a.Im;
	return *this;
}

bool operator == (Complex& a, Complex& b)
{
	return ((a.Re == b.Re) && (a.Im == b.Im));
}

ostream& operator << (ostream& out, Complex& b)
{
	out << b.Re << "+" << b.Im << "i";
	return out;
}

istream& operator >> (istream& in, Complex& b)
{
	in >> b.Re;
	in >> b.Im;
	return in;
}
