#include <iostream>
#include <string>
#include "Car.cpp"

int main() {
    Car newCar("Ford", "T", 2, 999, 100);;
    newCar.printInfo();
    newCar.refuel(300);
}