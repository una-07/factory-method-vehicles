#pragma once

class IVehicle {
public:
    virtual void Drive() = 0;
    virtual void Refuel() = 0;
    virtual ~IVehicle() = default;
};
