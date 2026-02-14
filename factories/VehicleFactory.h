#pragma once
#include "../vehicles/IVehicle.h"

class VehicleFactory {
public:
    virtual IVehicle* CreateVehicle() = 0;
    virtual ~VehicleFactory() = default;
};
