#pragma once
#include <time.h>
#include "Matrix.h"
#include <iostream>
using namespace std;
template <class T>
class Vector
{
protected:
	int N;
	T* arr;
public:
	Vector();
	Vector(int size, const T* _arr);
	Vector(int size);
	Vector(const Vector<T>& other);
	~Vector();

	int GetN();
	T* GetArr();
	int Search1(int search);
	float Search1(float search);
	double Search1(double search);
	void Search2(int search);
	void Search2(float search);
	void Search2(double search);
	void Set(int n, T* _arr);
	void SetI(int index, T t);



	Vector<T> operator = (const Vector<T>& other);
	bool operator ==(const Vector<T>& other);
	T operator [](const int i);
	Vector<T> operator+(const Vector<T>& other);
	Vector<T> operator-(const Vector<T>& other);
	T operator*(const Vector<T>& other);


	template <class T>
	friend ostream& operator<<(ostream& os, const Vector<T>& vec);
	template <class T>
	friend istream& operator>>(istream& in, Vector<T>& vec);

	void Bubble_sort();
	void Insertion_sort();
	void Quick_sort(int first, int last);
};









template<class T>
Vector<T>::Vector()
{
	N = 1;
	arr = new T[1];
	arr[0] = 0;
}

template<class T>
Vector<T>::Vector(int size, const T* arr_)
{
	N = size;
	arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = arr_[i];
}


Vector<int>::Vector(int size)
{
	N = size;
	arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = rand() % 100;
}

template<class T>
Vector<T>::Vector(const Vector<T>& other)
{
	N = other.N;
	arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = other.arr[i];
}

template<class T>
Vector<T>::~Vector()
{
	if (arr != 0)
	{
		delete[] arr;
		arr = 0;
		N = 0;
	}
}






template<class T>
int Vector<T>::GetN()
{
	return N;
}

template<class T>
T* Vector<T>::GetArr()
{
	return arr;
}

template<class T>
int Vector<T>::Search1(int search)
{
	int count = 0;

	for (int i = 0; i < N; i++)
		if (arr[i] == search)
			count++;
	cout << "Number of references is " << count << endl;
	return 0;
}

template<class T>
float Vector<T>::Search1(float search)
{
	int count = 0;

	for (int i = 0; i < N; i++)
		if (arr[i] == search)
			count++;
	cout << "Number of references is " << count << endl;
	return 0;
}

template<class T>
double Vector<T>::Search1(double search)
{
	int count = 0;

	for (int i = 0; i < N; i++)
		if (arr[i] == search)
			count++;
	cout << "Number of references is " << count << endl;
	return 0;
}

template<class T>
void Vector<T>::Search2(int search)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == search)
			cout << "Reference at " << i << " position" << endl;
}

template<class T>
void Vector<T>::Search2(float search)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == search)
			cout << "Reference at " << i << " position" << endl;
}

template<class T>
void Vector<T>::Search2(double search)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == search)
			cout << "Reference at " << i << " position" << endl;
}

template<class T>
void Vector<T>::Set(int n, T* _arr)
{
	delete[] arr;
	N = n;
	arr = new T[n];
	for (int i = 0; i < n; i++)
		arr[i] = _arr[i];
}

template<class T>
void Vector<T>::SetI(int index, T t)
{
	for (int i = 0; i < N; i++)
		if (i == index)
			arr[i] = t;
}









template<class T>
Vector<T> Vector<T>::operator=(const Vector<T>& other)
{
	if (*this == other)
		return *this;
	delete[] arr;
	this->N = other.N;
	arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = other.arr[i];
	return *this;
}

template<class T>
bool Vector<T>::operator==(const Vector<T>& other)
{
	if (N == other.N)
	{
		for (int i = 0; i < N; i++)
			if (arr[i] != other.arr[i])
				return false;
		return true;
	}
	else
		return false;
}

template<class T>
T Vector<T>::operator[](const int i)
{
	return arr[i];
}


template<class T>
Vector<T> Vector<T>::operator+(const Vector<T>& other)
{
	if (N == other.N)
	{
		Vector<T> vector(N, other.arr);
		for (int i = 0; i < N; i++)
			vector.arr[i] = other.arr[i] + arr[i];
		return vector;
	}
	else
		throw - 1;
}

template<class T>
Vector<T> Vector<T>::operator-(const Vector<T>& other)
{
	if (N == other.N)
	{
		Vector<T> vector(N, other.arr);
		for (int i = 0; i < N; i++)
			vector.arr[i] = arr[i] - other.arr[i];
		return vector;
	}
	else
		throw - 1;
}

template<class T>
T Vector<T>::operator *(const Vector<T>& other)
{
	T result = 0;
	if (N == other.N)
	{
		for (int i = 0; i < N; i++)
			result = result + (arr[i] * other.arr[i]);
		return result;
	}
	else
		throw - 1;
}











template<class T>
ostream& operator<<(ostream& os, const Vector<T>& vec)
{
	os << "(";
	for (int i = 0; i < vec.N; i++)
	{
		os << vec.arr[i];
		if (i < vec.N - 1)
			os << " ";
	}
	os << ")^T";
	return os;
}
template<class T>
istream& operator>>(istream& in, Vector<T>& vec)
{
	cout << "Vvedite razmer" << endl << "N = ";
	in >> vec.N;
	T* temp;
	temp = new T[vec.N];
	for (int i = 0; i < vec.N; i++)
		in >> temp[i];
	Vector<T> V(vec.N, temp);
	vec = V;
	delete[] temp;
	return in;
}






template<class T>
void Vector<T>::Bubble_sort()
{
	T temp = 0;

	for (int i = 0; i < N - 1; i++)
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
}

template<class T>
void Vector<T>::Insertion_sort()
{
	T temp;

	for (int i = 1; i < N; i++)
	{
		int j = i;
		while ((j > 0) && (arr[j - 1] < arr[j]))
		{
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}

}

template<class T>
void Vector<T>::Quick_sort(int first, int last)
{
	T mid, count;
	int f = first, l = last;

	mid = arr[(f + l) / 2];
	do
	{
		while (arr[f] < mid) f++;
		while (arr[l] > mid) l--;
		if (f <= l)
		{
			count = arr[f];
			arr[f] = arr[l];
			arr[l] = count;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l) Quick_sort(first, l);
	if (f < last) Quick_sort(f, last);
}
