#pragma once
#include <iostream>
#include "IVehicle.h"

class Bus : public IVehicle {
    int passengerCapacity;
    bool isElectric;

public:
    Bus(int p, bool e)
        : passengerCapacity(p), isElectric(e) {}

    void Drive() override {
        std::cout << "Bus for " << passengerCapacity
                  << " passengers is driving." << std::endl;
    }

    void Refuel() override {
        if (isElectric)
            std::cout << "Bus charging battery." << std::endl;
        else
            std::cout << "Bus refueled with diesel." << std::endl;
    }
};

