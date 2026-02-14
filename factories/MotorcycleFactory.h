#pragma once
#include "../vehicles/Motorcycle.h"
#include "VehicleFactory.h"

class MotorcycleFactory : public VehicleFactory {
    std::string type;
    int engine;

public:
    MotorcycleFactory(std::string t, int e)
        : type(t), engine(e) {}

    IVehicle* CreateVehicle() override {
        return new Motorcycle(type, engine);
    }
};

