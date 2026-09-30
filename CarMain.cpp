#include <iostream>
#include <string>
#include "Car.cpp"

int main() {
    Car newCar("Ford", "T", 2, 999, 100);
    std::cout << newCar.getFuelLevel() << std::endl;
}