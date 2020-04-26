#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class MyString {
public:
	MyString();

	MyString(char b, int leng);

	MyString(const char* cstr);

	MyString(MyString& a);

	~MyString();

	char* get_s()
	{
		return init;
	}
	int get_length()
	{
		return length;
	}
	void set_s(const char* s);

	friend MyString operator +(MyString& a, MyString& b);

	MyString& operator =(const MyString& a);

	void complete(MyString& a, MyString& b)
	{

		init = new char[a.get_length() + 1 + b.get_length()];
		length = a.get_length() + b.get_length();
		size = a.get_length() + 1 + b.get_length();
		for (int i = 0; i < a.get_length(); i++) init[i] = a.get_s()[i];
		for (int i = 0; i < b.get_length(); i++) init[i + a.get_length()] = b.get_s()[i];
		init[a.get_length() + b.get_length()] = 0;
	}

	friend bool operator == (MyString& a, MyString& b);

	friend bool operator <(MyString& a, MyString& b);

	friend bool operator >(MyString& a, MyString& b);

	char& operator [](const int index);

	friend ostream& operator <<(ostream& out, MyString& a);

	friend istream& operator >>(istream& in, MyString& b);

	char* find(const char* e);

	char* find_c(const char* c);

	void Cstrtok(const char* c);

private:
	char* init;
	int length;
	int size;
};