#include "Vector.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Vector::Vector()
{
	arr = nullptr;
	size = 0;
}
Vector::Vector(int s)
{
	size = s;
	arr = new int[size] {0};
}
Vector::Vector(initializer_list<int> a) {
	size = a.size();
	arr = new int[size];

	for (auto x = a.begin(); x != a.end(); x++) {
		*arr = *x;
		arr++;
	}
	arr -= size;
}

Vector::~Vector() {
	delete[]arr;
	size = 0;
}
void Vector::InputRand() {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
	}
}
void Vector::Print() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << "\n---------------------------------------------------\n";
}

void Vector::PushBack(int a) {
	int* temp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = a;

	delete[] arr;

	arr = temp;
	size++;

}

int Vector::PopBack() {
	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++) {
		temp[i] = arr[i];
	}
	int el = arr[size - 1];

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

void Vector::PushForward(int a) {
	int* temp = new int[size + 1];
	temp[0] = a;

	for (int i = 0; i < size; i++) {
		temp[i + 1] = arr[i];
	}

	delete[] arr;
	arr = temp;
	size++;
}

int Vector::PopForward() {
	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++) {
		temp[i] = arr[i];
	}
	int el = arr[0];

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

void Vector::PushIndex(int a, int index) {
	int* temp = new int[size + 1];

	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}

	temp[index] = a;

	for (int i = index; i < size; i++) {
		temp[i + 1] = arr[i];
	}

	delete[] arr;

	arr = temp;
	size++;
}

int Vector::PopIndex(int index) {
	int* temp = new int[size - 1];

	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}

	int el = arr[index - 1];

	for (int i = index + 1; i < size; i++) {
		temp[i - 1] = arr[i];
	}

	delete[] arr;

	arr = temp;
	size--;

	return el;
}

void Vector::PushArr(int newArr[], int newSize) {
	int* temp = new int[size + newSize];

	for (int i = 0; i < size; i++) {
		temp[i] = arr[i];
	}

	for (int i = 0; i < newSize; i++) {
		temp[size + i] = newArr[i];
	}

	delete[] arr;

	arr = temp;
	size += newSize;
}

int* Vector::getArray() const {
	return arr;
}

int Vector::getSize() const {
	return size;
}

void Vector::setArray(int* newArr, int newSize) {
	if (arr != nullptr) delete[] arr;
	arr = newArr;
	size = newSize;
}

Vector Vector::operator - (int a) {
	Vector rez(size - a);
	for (int i = 0; i < rez.size; i++) {
		rez.arr[i] = this->arr[i];
	}
	return rez;
}

Vector Vector::operator + (int a) {
	Vector rez(size + a);

	for (int i = 0; i < size; i++) {
		rez.arr[i] = this->arr[i];
	}
	for (int i = size; i < rez.size; i++) {
		rez.arr[i] = 0;
	}

	return rez;
}

Vector Vector::operator*(int a)
{
	Vector rez(size);

	for (int i = 0; i < size; i++) {
		rez.arr[i] = this->arr[i] * a;
	}
	return rez;
}

Vector Vector::operator+(const Vector& obj)
{
	int newSize = this->size + obj.size;

	Vector rez(newSize);

	for (int i = 0; i < this->size; i++) {
		rez.arr[i] = this->arr[i];
	}

	for (int i = 0; i < obj.size; i++) {
		rez.arr[this->size + i] = obj.arr[i];
	}

	return rez;
}

Vector& Vector::operator++() {
	PushForward(0);
	return *this;
}
Vector Vector::operator++(int) {
	Vector temp = *this;
	PushForward(0);
	return temp;
}

Vector& Vector::operator--() {
	PopIndex(0);
	return *this;
}

Vector Vector::operator--(int) {
	Vector temp = *this;
	PopIndex(0);
	return temp;
}

Vector& Vector::operator+=(int a) {
	int* temp = new int[size + a];

	for (int i = 0; i < size; i++) {
		temp[i] = arr[i];
	}

	for (int i = size; i < size + a; i++) {
		temp[i] = 0;
	}

	delete[] arr;

	arr = temp;
	size += a;

	return *this;
}

Vector& Vector::operator-=(int a) {
	if (size >= a) {
		int* temp = new int[size