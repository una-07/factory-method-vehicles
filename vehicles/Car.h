#pragma once
#include <iostream>
#include <string>
#include "IVehicle.h"

class Car : public IVehicle {
    std::string brand;
    std::string model;
    std::string fuelType;

public:
    Car(std::string b, std::string m, std::string f)
        : brand(b), model(m), fuelType(f) {}

    void Drive() override {
        std::cout << "Car " << brand << " " << model << " is driving." << std::endl;
    }

    void Refuel() override {
        std::cout << "Car refueled with " << fuelType << std::endl;
    }
};
