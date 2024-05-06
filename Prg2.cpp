#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) : brand(b) {}

    void display_info() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
private:
    string model;

public:
    Car(string b, string m) : Vehicle(b), model(m) {}

    void display_info() {
        Vehicle::display_info();
        cout << "Model: " << model << endl;
    }

    void drive() {
        cout << "Driving the car." << endl;
    }
};

class Bicycle : public Vehicle {
private:
    string type;

public:
    Bicycle(string b, string t) : Vehicle(b), type(t) {}

    void display_info() {
        Vehicle::display_info();
        cout << "Type: " << type << endl;
    }

    void ride() {
        cout << "Riding the bicycle." << endl;
    }
};

int main() {
    Vehicle vehicle("Generic");
    vehicle.display_info();
    cout << endl;

    Car car("Toyota", "Camry");
    car.display_info();
    car.drive();
    cout << endl;

    Bicycle bicycle("Giant", "Mountain");
    bicycle.display_info();
    bicycle.ride();

    return 0;
}
