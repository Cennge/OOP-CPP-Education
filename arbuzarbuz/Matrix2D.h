#pragma once
class Matrix2D
{
	int** ptr;
	int str; // ������
	int st; //�������
public:
	Matrix2D();
	Matrix2D(int _str, int _st);
	Matrix2D(const Matrix2D& arr);
	~Matrix2D();

	Matrix2D SumMatrix(const Matrix2D arr2);
	Matrix2D MultiMatrix(const Matrix2D arr2);

	void Input();
	void Print()const;
};

