#include "Gpu.h"
#include <iostream>

Gpu::Gpu(const char* m, double pr) {
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
    price = pr;
}

const char* Gpu::GetModel() {
    return model;
}

double Gpu::GetPrice() {
    return price;
}

void Gpu::SetPrice(double pr) {
    price = pr;
}

Gpu::~Gpu() {
    delete[] model;
}
