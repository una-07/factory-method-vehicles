#pragma once
#include "../vehicles/Bus.h"
#include "VehicleFactory.h"

class BusFactory : public VehicleFactory {
    int passengers;
    bool electric;

public:
    BusFactory(int p, bool e)
        : passengers(p), electric(e) {}

    IVehicle* CreateVehicle() override {
        return new Bus(passengers, electric);
    }
};

