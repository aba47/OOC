//program for hierarchical inheritance
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This vehicle is a car\n";
    }
};

class Bus : public Vehicle {
public:
    Bus() {
        cout << "This vehicle is a bus\n";
    }
};

int main() {
    Car obj1;   // creates a Car object
    Bus obj2;   // creates a Bus object
    return 0;
}

