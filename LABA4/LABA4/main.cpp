#include "Vector.h"
#include "Matrix.h"
#include "Operations.h"
#include <iostream>
#include <time.h>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	int type;
	int searchI;
	float searchF;
	double searchD;

	cout << "1. �������������" << endl << "2. �������" << endl << "3. ������������" << endl << "����������, �������� ��� ������ ��� ��������: ";
	cin >> type;
	switch (type)
	{
	case (1):
	{
		Vector<int> V1;
		Vector<int> V2;
		Vector<int> V;
		Vector<int> SV;
		Matrix<int> M1;
		Matrix<int> M2;
		Matrix<int> M;
		Matrix<int> SM;
		int Scalar;
		int type2;
		cout << "1. ������ + ������" << endl << "2. ������ - ������" << endl << "3.  ������ * ������" <<
			endl << "4.  ������� + �������" << endl << "5.  ������� - �������" << endl << "6.  ������� * �������" <<
			endl << "7.  ������ * �������" << endl << "8.  ������� * ������" << endl << "9. ������ ���������� � ����� ���� ��������� ��������� ����� � �������" << endl << "10. ������ ���������� � ����� ���� ��������� ��������� ����� � �������" << endl << "�������� ��������: ";
		cin >> type2;
		switch (type2)
		{
		case (1):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			V = V1 + V2;
			cout << V1 << " + " << V2 << " = " << V << endl;
			break;
		case (2):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			V = V1 - V2;
			cout << V1 << " - " << V2 << " = " << V << endl;
			break;
		case (3):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			Scalar = V1 * V2;
			cout << V1 << " * " << V2 << " = " << Scalar << endl;
			break;
		case (4):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 + M2;
			cout << M1 << endl << " + " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (5):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 - M2;
			cout << M1 << endl << " - " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (6):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 * M2;
			cout << M1 << endl << " * " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (7):
			cout << "������� ������" << endl;
			cin >> V1;
			cout << "������� �������" << endl;
			cin >> M2;
			M = V1 * M2;
			cout << V1 << endl << " * " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (8):
			cout << "������� �������" << endl;
			cin >> M1;
			cout << "������� ������" << endl;
			cin >> V2;
			V = M1 * V2;
			cout << M1 << endl << " * " << endl << V2 << endl << " = " << endl << V << endl;
			break;
		case (9):
			cout << "������� �������" << endl;
			cin >> SM;
			cout << "������� �����" << endl;
			cin >> searchI;
			SM.Search1(searchI);
			SM.Search2(searchI);
			break;
		case (10):
			cout << "������� ������" << endl;
			cin >> SV;
			cout << "������� �����" << endl;
			cin >> searchI;
			SV.Search1(searchI);
			SV.Search2(searchI);
			break;
		}
	}
	break;







	case(2):
	{
		Vector<float> V1;
		Vector<float> V2;
		Vector<float> V;
		Vector<float> SV;
		Matrix<float> M1;
		Matrix<float> M2;
		Matrix<float> M;
		Matrix<float> SM;
		float Scalar;
		int type2;
		cout << "1. ������ + ������" << endl << "2. ������ - ������" << endl << "3.  ������ * ������" <<
			endl << "4.  ������� + �������" << endl << "5.  ������� - �������" << endl << "6.  ������� * �������" <<
			endl << "7.  ������ * �������" << endl << "8.  ������� * ������" << endl << "9. ������ ���������� � ����� ���� ��������� ��������� ����� � �������" << endl << "10. ������ ���������� � ����� ���� ��������� ��������� ����� � �������" << endl << "�������� ��������: ";
		cin >> type2;
		switch (type2)
		{
		case (1):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			V = V1 + V2;
			cout << V1 << " + " << V2 << " = " << V << endl;
			break;
		case (2):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			V = V1 - V2;
			cout << V1 << " - " << V2 << " = " << V << endl;
			break;
		case (3):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			Scalar = V1 * V2;
			cout << V1 << " * " << V2 << " = " << Scalar << endl;
			break;
		case (4):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 + M2;
			cout << M1 << endl << " + " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (5):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 - M2;
			cout << M1 << endl << " - " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (6):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 * M2;
			cout << M1 << endl << " * " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (7):
			cout << "������� ������" << endl;
			cin >> V1;
			cout << "������� �������" << endl;
			cin >> M2;
			M = V1 * M2;
			cout << V1 << endl << " * " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (8):
			cout << "������� �������" << endl;
			cin >> M1;
			cout << "������� ������" << endl;
			cin >> V2;
			V = M1 * V2;
			cout << M1 << endl << " * " << endl << V2 << endl << " = " << endl << V << endl;
			break;
		case (9):
			cout << "������� �������" << endl;
			cin >> SM;
			cout << "������� �����" << endl;
			cin >> searchF;
			SM.Search1(searchF);
			SM.Search2(searchF);
			break;
		case (10):
			cout << "������� ������" << endl;
			cin >> SV;
			cout << "������� �����" << endl;
			cin >> searchF;
			SV.Search1(searchF);
			SV.Search2(searchF);
			break;
		}
	}
	break;






	case(3):
	{
		Vector<double> V1;
		Vector<double> V2;
		Vector<double> V;
		Vector<double> SV;
		Matrix<double> M1;
		Matrix<double> M2;
		Matrix<double> M;
		Matrix<double> SM;
		double Scalar;
		int type2;
		cout << "1. ������ + ������" << endl << "2. ������ - ������" << endl << "3.  ������ * ������" <<
			endl << "4.  ������� + �������" << endl << "5.  ������� - �������" << endl << "6.  ������� * �������" <<
			endl << "7.  ������ * �������" << endl << "8.  ������� * ������" << endl << "9. ������ ���������� � ����� ���� ��������� ��������� ����� � �������" << endl << "10. ������ ���������� � ����� ���� ��������� ��������� ����� � �������" << endl << "�������� ��������: ";
		cin >> type2;
		switch (type2)
		{
		case (1):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			V = V1 + V2;
			cout << V1 << " + " << V2 << " = " << V << endl;
			break;
		case (2):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			V = V1 - V2;
			cout << V1 << " - " << V2 << " = " << V << endl;
			break;
		case (3):
			cout << "������� ������ ������" << endl;
			cin >> V1;
			cout << "������� ������ ������" << endl;
			cin >> V2;
			Scalar = V1 * V2;
			cout << V1 << " * " << V2 << " = " << Scalar << endl;
			break;
		case (4):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 + M2;
			cout << M1 << endl << " + " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (5):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 - M2;
			cout << M1 << endl << " - " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (6):
			cout << "������� ������ �������" << endl;
			cin >> M1;
			cout << "������� ������ �������" << endl;
			cin >> M2;
			M = M1 * M2;
			cout << M1 << endl << " * " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (7):
			cout << "������� ������" << endl;
			cin >> V1;
			cout << "������� �������" << endl;
			cin >> M2;
			M = V1 * M2;
			cout << V1 << endl << " * " << endl << M2 << endl << " = " << endl << M << endl;
			break;
		case (8):
			cout << "������� �������" << endl;
			cin >> M1;
			cout << "������� ������" << endl;
			cin >> V2;
			V = M1 * V2;
			cout << M1 << endl << " * " << endl << V2 << endl << " = " << endl << V << endl;
			break;
		case (9):
			cout << "������� �������" << endl;
			cin >> SM;
			cout << "������� �����" << endl;
			cin >> searchD;
			SM.Search1(searchD);
			SM.Search2(searchD);
			break;
		case (10):
			cout << "������� ������" << endl;
			cin >> SV;
			cout << "������� �����" << endl;
			cin >> searchD;
			SV.Search1(searchD);
			SV.Search2(searchD);
			break;
		}
	}
	break;
	default:
		throw - 1;
	}

	/*
	double  t = clock();
	double seconds = clock() - t;
	cout << seconds;

	*/


	return 0;
}