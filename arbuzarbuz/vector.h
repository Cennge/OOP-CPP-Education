#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������

	void PushBack(int a);
	int PopBack();
	
	void PushForward(int a);
	int PopForward();

	void PushIndex(int a, int index);
	int PopIndex(int index);

	void PushArr(int arr[]);
};

/*
��������� ��������� ������:
��������� 1 �������� �� ������ �������
���������� �� �������, ������ � �������� �������� ��� ��������
�������� �� �������
�������� ������� ��������

���������� ������� � ����� �������� �������!


*/