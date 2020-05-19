#pragma once
#include <iostream>

using namespace std;

class Complex {
public:
	Complex();
	Complex(double a, double b);
	Complex(Complex& A);
	void set(double a, double b);
	Complex get();
	
	friend Complex operator + (Complex& a, Complex& b);
	friend Complex operator - (Complex& a, Complex& b);
	friend Complex operator * (Complex& a, Complex& b);
	friend Complex operator / (Complex& a, Complex& b);
	
	Complex& operator = (const Complex& a);
	
	friend bool operator == (Complex& a, Complex& b);
	friend ostream& operator << (ostream& out, Complex& b);
	friend istream& operator >> (istream& in, Complex& b);



private:
	double Re, Im;
};
