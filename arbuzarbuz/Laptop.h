#pragma once
#include "Cpu.h"
#include "Gpu.h"
#include "Ram.h"
#include "Ssd.h"

class Laptop {
    char* name;
    double price;
    Cpu cpu;
    Gpu gpu;
    Ram ram;
    Ssd ssd;

public:
    Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mgpu, double prgpu, const char* mram, double prram, const char* mssd, double prssd);
    double GetPrice();
    void Output();
    ~Laptop();
};
