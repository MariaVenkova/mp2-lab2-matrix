// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
#include <stdlib.h>
//---------------------------------------------------------------------------

void main()
{
	TMatrix<int> a(5), b(5), c(5);
	int i, j, vv1, vv2;

	setlocale(LC_ALL, "Russian");
	cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
	cout << "�������� ������ ������� ������:" << endl;
	cout << "������� ������� ��������-������� 1" << endl << "������� ������� ���������� -������� 2" << endl << "������� ������� ������ ��������-������� 3" << endl;
	cin >> vv1;
	if (vv1 == 1)
		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++) {
				a[i][j] = rand() % 101;
				b[i][j] = rand() % 101;
			}
	if (vv1 == 2)
		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++) {
				a[i][j] = i * 10 + j;
				b[i][j] = (i * 10 + j) * 100;
			}
	if (vv1 == 3) {
		cout << "������� �������� ��������� ������ �������" << endl;

		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++)
				cin >> a[i][j];

		cout << "������� �������� ��������� ������ �������" << endl;

		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++)
				cin >> b[i][j];
	}
	cout << "Matrix a = " << endl << a << endl;
	cout << "Matrix b = " << endl << b << endl;

	cout << "�������� ��������, ������� ������ ���������� ��� ���������:" << endl;
	cout << "�������� ������ - ������� 1" << endl << "��������� ������ (A-B) - ������� 2" << endl << "��������� ������ (B-A)- ������� 3" << endl;
	cin >> vv2;
	if (vv2 == 1) {
		c = a + b;
		cout << "Matrix c = a + b" << endl << c << endl;
	}
	if (vv2 == 2) {
		c = a - b;
		cout << "Matrix c = a - b" << endl << c << endl;
	}
	if (vv2 == 3) {
		c = b - a;
		cout << "Matrix c = b - a" << endl << c << endl;
	}

}