#pragma once
#include "Transport.h"

using namespace std;

class WaterTransport : public Transport {
protected:
    double displacement;
    double payload;

public:
    WaterTransport(string n, double s, int c, double d, double p)
        : Transport(n, s, c), displacement(d), payload(p) {}

    void Output() const {
        Transport::Output();
        cout << "Displacement: " << displacement << "\nPayload: " << payload << endl;
    }
};
