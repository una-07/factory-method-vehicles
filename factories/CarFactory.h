#pragma once
#include <string>
#include "../vehicles/Car.h"
#include "VehicleFactory.h"

class CarFactory : public VehicleFactory {
    std::string brand;
    std::string model;
    std::string fuel;

public:
    CarFactory(std::string b, std::string m, std::string f)
        : brand(b), model(m), fuel(f) {}

    IVehicle* CreateVehicle() override {
        return new Car(brand, model, fuel);
    }
};

