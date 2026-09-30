#include <iostream>
#include <string>
#include "Car.hpp"

// constructors
// no args constructor
Car::Car() {
    make = "-";
    model = "-";
    year = 1900;
    mpg = 0.0;
    fuelCapacity = 100;
}

// args constructor
Car::Car(std::string make_, std::string model_, int year_, double MPG_ = 0, double fuel_capacity_ = 0) {
    setMake(make_);
    setModel(model_);
    setYear(year_);
    setMPG(MPG_);
    setFuelCapacity(fuel_capacity_);
}


// methods

void Car::printInfo() const {
std::cout << "Make\t\t" << make << std::endl;
std::cout << "Model\t\t" << model << std::endl;
std::cout << "Year\t\t" << year << std::endl;
std::cout << "MPG\t\t" << mpg << std::endl;
std::cout << "Fuel\t\t" << fuelLevel << std::endl;
std::cout << "Miles\t\t" << mileage << std::endl;
}

void Car::refuel(double gallons) {
    std::cout << "Refueling..." << std::endl;
    
    fuelLevel += gallons;
    double overflow = fuelLevel - fuelCapacity;

    if (fuelLevel > fuelCapacity) {
        std::cout << "Fuel added: " << gallons - overflow << std::endl;
        std::cout << "Excess fuel: " << overflow << std::endl;
        fuelLevel = fuelCapacity;
    } else {
        std::cout << "Fuel added: " << fuelLevel - overflow << std::endl;
    }

    std::cout << "Fuel level: " << fuelLevel << std::endl;
    
}


// getters and setters
// get
double Car::getFuelLevel() const {
    return fuelLevel;
}

// set
void Car::setMake(const std::string& mk) {
    make = mk;
}
void Car::setModel(const std::string& md) {
    model = md;
}
void Car::setYear(int y) {
    year = (y > 1900 && y < 2027) ? y : 1900;
}
void Car::setMPG(double new_mpg) {
    mpg = (new_mpg > 0) ? new_mpg : 0;
}
void Car::setFuelCapacity(int fc) {
    fuelCapacity = fc;
}

