#include<iostream>
#include"Laptop.h"

using namespace std;

int main()
{
	Laptop laptop("Hp", 500, "Intel i7", 300, "NVIDIA GTX 1080", 400, "Corsair 16GB", 150, "Samsung 1TB", 200);
	laptop.Output();
}