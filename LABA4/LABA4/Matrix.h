#pragma once
#include <iostream>
#include "Vector.h"
using namespace std;


template <class T>
class Matrix
{
protected:
	int n;
	int m;
	T** arr;
public:
	Matrix();
	Matrix(int size1, int size2, T** arr_);
	Matrix(int size1, int size2);
	Matrix(const Matrix<T>& other);
	~Matrix();

	int GetN();
	int GetM();
	T** GetArr();
	void Set(int _n, int _m, T** _arr);
	void SetI(int index1, int index2, T t);
	int Search1(int search);
	float Search1(float search);
	double Search1(double search);
	void Search2(int search);
	void Search2(float search);
	void Search2(double search);


	Matrix<T> operator = (const Matrix<T>& other);
	bool operator ==(const Matrix<T>& other);
	T*& operator [](const int _n);
	Matrix<T> operator +(const Matrix<T>& other);
	Matrix<T> operator -(const Matrix<T>& other);
	Matrix<T> operator *(const Matrix<T>& other);

	template<class T>
	friend ostream& operator<<(ostream& os, const Matrix<T>& mat);
	template<class T>
	friend istream& operator>>(istream& in, Matrix<T>& mat);

};











template<class T>
Matrix<T>::Matrix()
{
	n = 1;
	m = 1;
	arr = new T * [1];
	arr[0] = new T[1];
	arr[0][0] = 0;
}

template<class T>
Matrix<T>::Matrix(int size1, int size2, T** arr_)
{
	n = size1;
	m = size2;
	arr = new T * [n];
	for (int i = 0; i < n; i++)
		arr[i] = new T[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = arr_[i][j];
}

template<class T>
Matrix<T>::Matrix(int size1, int size2)
{
	n = size1;
	m = size2;
	arr = new T * [n];
	for (int i = 0; i < n; i++)
		arr[i] = new T[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = rand() % 100;
}

template<class T>
Matrix<T>::Matrix(const Matrix<T>& other)
{
	n = other.n;
	m = other.m;
	arr = new T * [n];

	for (int i = 0; i < n; i++)
		arr[i] = new T[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = other.arr[i][j];
}


template<class T>
Matrix<T>::~Matrix()
{
	if (arr != 0)
	{
		for (int i = 0; i < n; i++)
			delete[] arr[i];
		delete[] arr;
		arr = 0;
		n = 0;
		m = 0;
	}
}






template<class T>
int Matrix<T>::GetN()
{
	return n;
}

template<class T>
int Matrix<T>::GetM()
{
	return m;
}

template<class T>
T** Matrix<T>::GetArr()
{
	return arr;
}

template<class T>
void Matrix<T>::Set(int _n, int _m, T** _arr)
{
	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	n = _n;
	m = _m;

	arr = new T * [n];
	for (int i = 0; i < n; i++)
		arr[i] = new T[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = _arr[i][j];
}

template<class T>
void Matrix<T>::SetI(int index1, int index2, T t)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (i == index1 && j == index2)
				arr[i][j] = t;
}

template<class T>
int Matrix<T>::Search1(int search)
{
	int count = 0;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == search)
				count++;
	cout << "Number of references is " << count << endl;
	return 0;
}

template<class T>
float Matrix<T>::Search1(float search)
{
	int count = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == search)
				count++;
	cout << "Number of references is " << count << endl;
	return 0;
}

template<class T>
double Matrix<T>::Search1(double search)
{
	int count = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == search)
				count++;
	cout << "Number of references is " << count << endl;
	return 0;
}

template<class T>
void Matrix<T>::Search2(int search)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == search)
				cout << "Reference at " << i << j << " position" << endl;
}

template<class T>
void Matrix<T>::Search2(float search)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == search)
				cout << "Reference at " << i << j << " position" << endl;
}

template<class T>
void Matrix<T>::Search2(double search)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == search)
				cout << "Reference at " << i << j << " position" << endl;
}






template<class T>
Matrix<T> Matrix<T>::operator = (const Matrix<T>& other)
{
	if (*this == other)
		return *this;
	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;
	this->n = other.n;
	this->m = other.m;
	arr = new T * [n];
	for (int i = 0; i < n; i++)
		arr[i] = new T[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = other.arr[i][j];
	return *this;
}

template<class T>
bool Matrix<T>::operator ==(const Matrix<T>& other)
{
	if (n == other.n && m == other.m)
	{

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (arr[i][j] != other.arr[i][j])
					return false;
		return true;
	}
	else
		return false;
}

template<class T>
T*& Matrix<T>::operator [](const int _n)
{
	return arr[_n];
}

template<class T>
Matrix<T> Matrix<T>::operator +(const Matrix<T>& other)
{
	if (n == other.n && m == other.m)
	{
		Matrix<T> matrix(n, m, other.arr);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				matrix.arr[i][j] = other.arr[i][j] + arr[i][j];
		return matrix;
	}
	else
		throw - 1;
}

template<class T>
Matrix<T> Matrix<T>::operator -(const Matrix<T>& other)
{
	if (n == other.n && m == other.m)
	{
		Matrix<T> matrix(n, m, other.arr);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				matrix.arr[i][j] = arr[i][j] - other.arr[i][j];
		return matrix;
	}
	else
		throw - 1;
}

template<class T>
Matrix<T> Matrix<T>::operator *(const Matrix<T>& other)
{
	if (this->m == other.n)
	{
		Matrix<T> result;
		result.n = this->n;
		result.m = other.m;
		result.arr = new T * [result.n];
		for (int i = 0; i < result.n; i++)
			result.arr[i] = new T[result.m];

		for (int i = 0; i < result.n; i++)
			for (int j = 0; j < result.m; j++)
			{
				result.arr[i][j] = 0;
				for (int k = 0; k < this->m; k++)
				{
					result.arr[i][j] = result.arr[i][j] + (arr[i][k] * other.arr[k][j]);
				}
			}
		return result;
	}
	else
		throw - 1;

}










template<class T>
ostream& operator<<(ostream& os, const Matrix<T>& mat)
{
	for (int i = 0; i < mat.n; i++)
	{
		if (i > 0) os << endl;
		os << "|";
		for (int j = 0; j < mat.m; j++)
			os << mat.arr[i][j] << " ";
		os << "|";
	}
	return os;
}

template<class T>
istream& operator>>(istream& in, Matrix<T>& mat)
{

	for (int i = 0; i < mat.n; i++)
		delete[] mat.arr[i];
	delete[] mat.arr;

	cout << "Vvedite razmer" << endl << "n = ";
	in >> mat.n;
	cout << "m = ";
	in >> mat.m;
	T** temp;
	temp = new T * [mat.n];
	for (int i = 0; i < mat.n; i++)
		temp[i] = new T[mat.m];


	for (int i = 0; i < mat.n; i++)
	{
		cout << "Vvedite " << i + 1 << " stroku" << endl;
		for (int j = 0; j < mat.m; j++)
			in >> temp[i][j];
	}

	mat.arr = new T * [mat.n];
	for (int i = 0; i < mat.n; i++)
		mat.arr[i] = new T[mat.m];

	for (int i = 0; i < mat.n; i++)
		for (int j = 0; j < mat.m; j++)
			mat.SetI(i, j, temp[i][j]);

	for (int i = 0; i < mat.n; i++)
		delete[] temp[i];
	delete[] temp;
	return in;
}