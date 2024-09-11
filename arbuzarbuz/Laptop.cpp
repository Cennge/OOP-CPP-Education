#include "Laptop.h"
#include <iostream>
#include <cstring>

using namespace std;

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mgpu, double prgpu, const char* mram, double prram, const char* mssd, double prssd)
    : cpu(mcpu, prcpu), gpu(mgpu, prgpu), ram(mram, prram), ssd(mssd, prssd)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    price = pr;
}

double Laptop::GetPrice() {
    return price + cpu.GetPrice() + gpu.GetPrice() + ram.GetPrice() + ssd.GetPrice();
}

void Laptop::Output() {
    cout << "Model: " << name << endl
        << "Cpu: " << cpu.GetModel() << endl
        << "Gpu: " << gpu.GetModel() << endl
        << "Ram: " << ram.GetModel() << endl
        << "Ssd: " << ssd.GetModel() << endl
        << "Laptop price = " << GetPrice() << " $\n";
}

Laptop::~Laptop() {
    delete[] name;
}
