#pragma once
#include "Transport.h"

using namespace std;

class LandTransport : public Transport {
protected:
    int wheels;
    string terrainType;

public:
    LandTransport(string n, double s, int c, int w, string tt)
        : Transport(n, s, c), wheels(w), terrainType(tt) {}

    void Output() const {
        Transport::Output();
        cout << "Wheels: " << wheels << "\nTerrain Type: " << terrainType << endl;
    }
};
