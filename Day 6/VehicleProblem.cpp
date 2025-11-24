#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;

public:
    Vehicle(string vehicle_make, string vehicle_model) {
        make = vehicle_make;
        model = vehicle_model;
    }

    void display_info() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
protected:
    int num_doors;

public:
    Car(string car_make, string car_model, int doors)
        : Vehicle(car_make, car_model) {
            num_doors = doors;
        }

    void display_info() {
        Vehicle::display_info();
        cout << "Number of Doors: " << num_doors << endl;
    }
};

class ElectricCar : public Car {
private:
    int battery_capacity;

public:
    ElectricCar(string electric_make, string electric_model, int doors, int capacity)
        : Car(electric_make, electric_model, doors) {
            battery_capacity = capacity;
        }

    void display_info() {
        Car::display_info();
        cout << "Battery Capacity: " << battery_capacity << " kWh" << endl;
    }
};

int main() {
    string make = "Tesla";
    string model = "Model S";
    ElectricCar my_car(make, model, 4, 100);

    cout << "Displaying information for my Electric Car:" << endl;

    my_car.display_info();

    return 0;
}

