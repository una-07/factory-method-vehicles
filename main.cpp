#include <iostream>
#include <memory>
#include "factories/CarFactory.h"
#include "factories/MotorcycleFactory.h"
#include "factories/TruckFactory.h"
#include "factories/BusFactory.h"

int main() {
    int choice;
    std::cout << "Select vehicle type:\n";
    std::cout << "1 - Car\n";
    std::cout << "2 - Motorcycle\n";
    std::cout << "3 - Truck\n";
    std::cout << "4 - Bus\n";
    std::cin >> choice;

    std::unique_ptr<VehicleFactory> factory;

    if (choice == 1) {
        std::string brand, model, fuel;
        std::cout << "Brand: ";
        std::cin >> brand;
        std::cout << "Model: ";
        std::cin >> model;
        std::cout << "Fuel type: ";
        std::cin >> fuel;

        factory = std::make_unique<CarFactory>(brand, model, fuel);
    }
    else if (choice == 2) {
        std::string type;
        int engine;
        std::cout << "Motorcycle type: ";
        std::cin >> type;
        std::cout << "Engine volume: ";
        std::cin >> engine;

        factory = std::make_unique<MotorcycleFactory>(type, engine);
    }
    else if (choice == 3) {
        double capacity;
        int axles;
        std::cout << "Capacity (tons): ";
        std::cin >> capacity;
        std::cout << "Axles: ";
        std::cin >> axles;

        factory = std::make_unique<TruckFactory>(capacity, axles);
    }
    else if (choice == 4) {
        int passengers;
        int electric;
        std::cout << "Passenger capacity: ";
        std::cin >> passengers;
        std::cout << "Electric? (1 yes / 0 no): ";
        std::cin >> electric;

        factory = std::make_unique<BusFactory>(passengers, electric);
    }
    else {
        std::cout << "Invalid choice." << std::endl;
        return 0;
    }

    IVehicle* vehicle = factory->CreateVehicle();
    vehicle->Drive();
    vehicle->Refuel();

    delete vehicle;
    return 0;
}

