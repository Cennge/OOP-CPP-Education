#include <iostream>

using namespace std;

class Fractions
{
private:
	double numerator, denominator;
public:
	void init(int x, int y) {
		if (y == 0) {
			cout << "Error: Denominator cannot be zero" << endl;
			numerator = 0;
			denominator = 1;
		}
		else {
			numerator = x;
			denominator = y;
		}
	}
	void printFractions() {
		cout << numerator << " / " << denominator << " = " << numerator / denominator << endl;
	}
};

int main() {
	Fractions frac1;
	
	frac1.init(2, 4);
	frac1.printFractions();
}
