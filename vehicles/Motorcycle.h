#pragma once
#include <iostream>
#include <string>
#include "IVehicle.h"

class Motorcycle : public IVehicle {
    std::string type;
    int engineVolume;

public:
    Motorcycle(std::string t, int e)
        : type(t), engineVolume(e) {}

    void Drive() override {
        std::cout << "Motorcycle (" << type << ") with engine "
                  << engineVolume << "cc is driving." << std::endl;
    }

    void Refuel() override {
        std::cout << "Motorcycle refueled." << std::endl;
    }
};
