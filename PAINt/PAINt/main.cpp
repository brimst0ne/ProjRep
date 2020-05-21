#include <iostream>
#include "Container.h"
#include"Circle.h"
#include"Triangle.h"
#include"Square.h"
#include"Rectangle.h"
#include"Line.h"
#include"Point.h"
#include"Cube.h"
#include"Objects.h"
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Container Container;
	Point<char> point;
	Line<char> line(10, '-');
	Square<int> square(3, 'H');
	Rectangle<int> rectangle(3, 6, 0);
	Triangle<char> triangle(4, '*');
	Circle<char> circle(3, '.');
	Cube<char> cube(3, '*');

	Container.Add(point);
	Container.Add(line);
	Container.Add(square);
	Container.Add(rectangle);
	Container.Add(triangle);
	Container.Add(circle);
	Container.Add(cube);


	cout << "�����:" << endl;
	Container.Show(point);
	cout << endl;
	cout << "�����:" << endl;
	Container.Show(line);
	cout << endl;
	cout << "�������:" << endl;
	Container.Show(square);
	cout << endl;
	cout << "�������������:" << endl;
	Container.Show(rectangle);
	cout << endl;
	cout << "�����������:" << endl;
	Container.Show(triangle);
	cout << endl;
	cout << "����:" << endl;
	Container.Show(circle);
	cout << endl;
	cout << "���:" << endl;
	Container.Show(cube);

	if (square.Area() > cube.Area())
		Container.Delete(cube);
	if (square.Area() < cube.Area())
		Container.Delete(square);

	cout << "******************************� ��� ��� ����� � ����������***********************************" << endl << Container;
	return 0;
}