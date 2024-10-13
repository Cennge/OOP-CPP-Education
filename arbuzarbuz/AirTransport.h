#pragma once
#include "Transport.h"

using namespace std;

class AirTransport : public Transport {
protected:
    double maxAltitude;

public:
    AirTransport(string n, double s, int c, double ma, double p)
        : Transport(n, s, c), maxAltitude(ma){}

    void Output() const {
        Transport::Output();
        cout << "Max Altitude: " << maxAltitude << endl;
    }
};
