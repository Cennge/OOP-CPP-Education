#include<iostream>
using namespace std;

class Point // создание нового типа!!
{
private:
	int x;
	int y;
public:
	Point() {}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print() // метод класса
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}
	void Input(int a, int b) // метод класса
	{
		x = a;
		y = b;
	}

	Point Sum(Point& b)
	{
		Point sum(x + b.x, y + b.y);
		return sum;
	}

	Point operator+ (Point& b) // obj+obj
	{
		Point sum(x + b.x, y + b.y);
		return sum;
	}
	Point operator+ (int b) // obj+int
	{
		Point sum(x + b, y + b);
		return sum;
	}

	Point& operator++() // ++a
	{
		x += 10;
		y += 10;
		return *this;
	}
	Point operator++(int) // a++
	{
		Point temp(x, y);
		x += 10;
		y += 10;
		return temp;
	}
	Point& operator--() // --a
	{
		x -= 10;
		y -= 10;
		return *this;
	}
	Point operator--(int) // a--
	{
		Point temp(x, y);
		x -= 10;
		y -= 10;
		return temp;
	}

	///---- сокращенные формы

	Point& operator += (int a) {
		x += a;
		y += a;
		return *this;
	}
	Point& operator-=(int a) {
		x -= a;     y -= a;
		return *this;
	}
	Point& operator*=(int a) {
		x *= a;
		y *= a;     return *this;
	}
	Point& operator/=(int a) {
		x /= a;     y /= a;
		return *this;
	}
};
int main()
{
	Point a(1, 2);
	a.Print();
	// Point x = ++a;
	a += 20;
	a.Print();





}