#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	void Print() {
		cout << "x: " << x << endl << "y: " << y << endl;
	}
	void Init(int a, int b) {
		x = a;
		y = b;
	}
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
};

int main() {
	Point a;
	a.Init(1, 2);
	a.Print();

	Point b; 
	b.Init(3, 4);
	b.Print();
}
