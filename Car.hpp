// .hpp header file. Keeps the description of the class. No implementation.
#include <string>

class Car {
    public:
        // No arg constructor
        Car();

        // printInfo method
        void printInfo() const;

        // Getters
        std::string getMake() const;
        std::string getModel() const;
        int getYear() const;
        double getMPG() const;
        double getFuelLevel() const;

        // Setters
        void setMake(const std::string& mk);
        void setModel(const std::string& md);
        void setYear(int y);
        void setMPG(double new_mpg);


    private:
        std::string make;
        std::string model;
        int year;
        double mpg;
        double mileage;
        double fuelCapacity;
        double fuelLevel;
};
