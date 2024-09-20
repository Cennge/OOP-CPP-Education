#include "Matrix2D.h"
#include <iostream>

using namespace std;

Matrix2D::Matrix2D()
{
	ptr = nullptr;
	str = st = 0;
}

Matrix2D::Matrix2D(int _str, int _st)
{
	str = _str;
	st = _st;
	ptr = new int* [str];

	for (int i = 0; i < str; i++)
	{
		ptr[i] = new int[st] {0};
	}
}

Matrix2D::Matrix2D(const Matrix2D& arr)
{
	str = arr.str;
	st = arr.st;

	ptr = new int* [str];

	for (int i = 0; i < str; i++) {
		ptr[i] = new int[st];
		for (int j = 0; j < st; j++) {
			ptr[i][j] = arr.ptr[i][j];
		}
	}
}

Matrix2D::~Matrix2D()
{
	for (int i = 0; i < str; i++) {
		delete[]ptr[i];
	}
	delete[] ptr;
	cout << "Destructor\n";
}

Matrix2D Matrix2D::SumMatrix(const Matrix2D arr2)
{
	if (str != arr2.str || st != arr2.st) {
		cout << "Размеры не совпадают" << endl;
		return *this;
	}

	Matrix2D result(str, st);

	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			result.ptr[i][j] = this->ptr[i][j] + arr2.ptr[i][j];
		}
	}

	return result;
}

Matrix2D Matrix2D::MultiMatrix(const Matrix2D arr2)
{
	if (st != arr2.str) {
		cout << "Error st!=str" << endl;
		return *this;
	}

	Matrix2D rez(str, arr2.st);

	for (int i = 0; i < str; i++) {
		for (int j = 0; j < arr2.st; j++) {
			rez.ptr[i][j] = 0;
			for (int k = 0; k < st; k++) {
				rez.ptr[i][j] += this->ptr[i][k] * arr2.ptr[k][j];
			}//Элемент матрицы которая будет в результате, считается, как сумма произведений 
			 //элементов строки i первой матрицы и столбца j второй 
		}
	}

	return rez;
}

Matrix2D Matrix2D::TransposeMatrix()
{
	Matrix2D rez(st, str);

	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			rez.ptr[j][i] = this->ptr[i][j];
		}
	}
}

void Matrix2D::SetElement(int row, int col, int value)
{
	if (row >= 0 && row < str && col >= 0 && col < st) {
		ptr[row][col] = value;
	}
	else {
		cout << "Error no index" << endl;
	}
}

int Matrix2D::GetElement(int row, int col)
{
	if (row >= 0 && row < str && col >= 0 && col < st) {
		return ptr[row][col];
	}
	else {
		cout << "Error no index" << endl;
		return 0;
	}
}

void Matrix2D::Input()
{
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			ptr[i][j] = rand() % 100;
		}
	}
}

void Matrix2D::Print() const
{
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < st; j++) {
			cout << ptr[i][j] << "\t";
		}
		cout << endl << endl;
	}
}
