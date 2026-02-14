#pragma once
#include "../vehicles/Truck.h"
#include "VehicleFactory.h"

class TruckFactory : public VehicleFactory {
    double capacity;
    int axles;

public:
    TruckFactory(double c, int a)
        : capacity(c), axles(a) {}

    IVehicle* CreateVehicle() override {
        return new Truck(capacity, axles);
    }
};

