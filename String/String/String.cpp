#define _CRT_SECURE_NO_WARNINGS
#include "String.h"

MyString::MyString() :init(0), size(0), length(0)
{

}

MyString::MyString(char b, int leng) {
	size = leng + 1;
	init = new char[size];
	length = leng;
	for (int i = 0; i < length; i++) init[i] = b;
	init[length] = 0;
}

MyString::MyString(const char* cstr) {
	if (strlen(cstr) > 0) {

		size = strlen(cstr) + 1;
		length = strlen(cstr);
		init = new char[strlen(cstr) + 1];
		for (size_t i = 0; i < strlen(cstr); i++)init[i] = cstr[i];
		init[strlen(cstr)] = 0;
	}

}

MyString::MyString(MyString& a) {
	size = a.get_length() + 1;
	length = a.get_length();
	init = new char[size];
	for (int i = 0; i < length; i++)init[i] = a.get_s()[i];
	init[length] = 0;
}

MyString::~MyString() {
	delete[] init;
}

void MyString::set_s(const char* s) {
	if (strlen(s) > 0) {
		size = strlen(s) + 1;
		length = strlen(s);
		init = new char[strlen(s) + 1];
		for (size_t i = 0; i < strlen(s); i++)init[i] = s[i];
		init[strlen(s)] = 0;
	}
}

MyString operator +(MyString& a, MyString& b) {
	MyString c(a);
	c.complete(a, b);
	return c;
}

MyString& MyString::operator =(const MyString& a) {
	length = a.length;
	size = length + 1;
	init = new char[size];
	for (int i = 0; i < length; i++)init[i] = a.init[i];
	init[length] = 0;
	return *this;
}

bool operator == (MyString& a, MyString& b) {
	return(0 == strcmp(a.get_s(), b.get_s()));
}

bool operator <(MyString& a, MyString& b) {
	return(strcmp(a.get_s(), b.get_s()) < 0);
}

bool operator >(MyString& a, MyString& b) {
	return(strcmp(a.get_s(), b.get_s()) > 0);
}

char& MyString::operator [](const int index) {
	return init[index];
}

ostream& operator <<(ostream& out, MyString& a) {
	for (int i = 0; i < a.get_length(); i++) {
		out << a.get_s()[i];
	}

	return out;
}

istream& operator >>(istream& in, MyString& b) {
	char t[256];
	in.getline(t, 256);
	MyString e(t);
	b = e;
	return in;
}

char* MyString::find(const char* e) {
	char* t = strstr(init, e);
	return t;
}

char* MyString::find_c(const char* c) {
	char* t = strstr(init, c);
	return t;
}

void MyString::Cstrtok(const char* c) {
	char* istr = strtok(init, c);


	while (istr != NULL)
	{

		cout << istr << endl;

		istr = strtok(NULL, c);
	}
}
