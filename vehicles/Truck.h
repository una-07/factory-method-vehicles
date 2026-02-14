#pragma once
#include <iostream>
#include "IVehicle.h"

class Truck : public IVehicle {
    double capacity;
    int axles;

public:
    Truck(double c, int a)
        : capacity(c), axles(a) {}

    void Drive() override {
        std::cout << "Truck with capacity "
                  << capacity << " tons is driving." << std::endl;
    }

    void Refuel() override {
        std::cout << "Truck refueled." << std::endl;
    }
};
