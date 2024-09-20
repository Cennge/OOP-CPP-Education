#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	Vector obj2 = obj1 - 2;
	obj2.Print();

	Vector obj3 = obj1 + 5;
	obj3.Print();

	Vector obj4(2);
	obj1.InputRand();
	obj4.Print();

	//Vector obj5 = obj1 + obj4; // 1 2 3 4 5 10 20

	//Vector obj6 = obj1 * 3; // 3 6 9 12 15 

	return 0;

}
