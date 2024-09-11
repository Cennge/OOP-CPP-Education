#include "Cpu.h"
#include<iostream>
using namespace std;

Cpu::Cpu(const char* m, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	price = pr;
}

const char* Cpu::GetModel()
{
	return model;
}

double Cpu::GetPrice()
{
	return price;
}

void Cpu::SetPrice(double pr)
{
	price = pr;
}

Cpu::~Cpu()
{
	delete[]model;
}
