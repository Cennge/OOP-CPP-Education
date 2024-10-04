#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
	MyString stringExample("YoYo!!!");
	cout << "Len = " << stringExample.MyStrLen() << endl;
	stringExample.Print();

	stringExample.Input();
	stringExample.Print();

	MyString stringExample2("YiYi!!!");

	stringExample += " Hello world!";
	stringExample.Print();

	MyString stringExample3;
	stringExample3 = "Hello, " + stringExample2;
	stringExample3.Print();

	MyString::GetCountLiveObj();
	MyString::GetCountCreatedObj();

	MyString str{ 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!' };
	str.Print();

	return 0;
}
