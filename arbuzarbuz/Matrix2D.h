#pragma once
class Matrix2D
{
	int** ptr;
	int str; // ������
	int st; //�������
public:
	Matrix2D();
	Matrix2D(int _str, int _st);
	~Matrix2D();
	void Input();
	void Print()const;
};

