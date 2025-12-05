#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string make;
    string model;

    Vehicle(string m, string mod) {
        make = m;
        model = mod;
    }

    void displayDetails() {
        cout << "Vehicle Make: " << make << endl;
        cout << "Vehicle Model: " << model << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors;

    Car(string m, string mod, int doors) : Vehicle(m, mod) {
        numberOfDoors = doors;
    }

    void displayCarDetails() {
        displayDetails();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 4);
    myCar.displayCarDetails();

    return 0;
    }
