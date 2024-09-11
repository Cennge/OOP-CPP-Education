#pragma once
class Cpu
{
	char* model;
	double price;
public:
	Cpu(const char* m, double pr);
	const char* GetModel();
	double GetPrice();
	void SetPrice(double pr);
	~Cpu();
};

