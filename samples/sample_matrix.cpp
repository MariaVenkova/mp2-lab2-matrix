﻿// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
#include <stdlib.h>
//---------------------------------------------------------------------------

void main()
{
	TMatrix<int> a(5), b(5), c(5);
	int i, j, vv1, vv2;

	setlocale(LC_ALL, "Russian");
	cout << "Тестирование программ поддержки представления треугольных матриц" << endl;
	cout << "Выберите способ задания матриц:" << endl;
	cout << "Задание матрицы рандомом-введите 1" << endl << "Задание матрицы программой -введите 2" << endl << "Задание матрицы ручным способом-введите 3" << endl;
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
		cout << "Задайте значения элементам первой матрицы" << endl;

		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++)
				cin >> a[i][j];

		cout << "Задайте значения элементам второй матрицы" << endl;

		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++)
				cin >> b[i][j];
	}
	cout << "Matrix a = " << endl << a << endl;
	cout << "Matrix b = " << endl << b << endl;

	cout << "Выберите операцию, которую хотите произвести над матрицами:" << endl;
	cout << "Сложение матриц - введите 1" << endl << "Вычитание матриц (A-B) - введите 2" << endl << "Вычитание матриц (B-A)- введите 3" << endl;
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