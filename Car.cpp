#include <iostream>
#include <string>
#include "Car.hpp"

// no args constructor
Car::Car() {
    make = "-";
    model = "-";
    year = 1900;
    mpg = 0.0;
    fuelLevel = 100;
}

// args constructor
Car::Car(const std::string& mk, const std::string& mdl, int y, double car_mpg) {
    setMake(mk);
    setModel(mdl);
    setYear(y);
    setMPG(car_mpg);
}


// methods

void Car::printInfo() const {
std::cout << "Make\t\t" << make << std::endl;
std::cout << "Model\t\t" << model << std::endl;
std::cout << "Year\t\t" << year << std::endl;
std::cout << "MPG\t\t" << mpg << std::endl;
}


// getters and setters
// get
double Car::getFuelLevel() const {
    return fuelLevel;
}

// set
void       Car::setMake(const std::string& mk) {
    make = mk;
}
void       Car::setModel(const std::string& md) {
    model = md;
}
void        Car::setYear(int y) {
    year = (y > 1900 && y < 2027) ? y : 1900;
}
void        Car::setMPG(double new_mpg) {
    mpg = (new_mpg > 0) ? new_mpg : 0;
}

