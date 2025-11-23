#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;

public:
    // 1. Default Constructor
    Car()
    {
        make = "Generic";
        model = "Unknown";
        year = 2025;
        cout << "\n-> Default Constructor: A placeholder car has been created." << endl;
    }
     
    // 2. Parameterized Constructor
    Car(string mk, string mdl, int yr)
    {
        make = mk;
        model = mdl;
        year = yr;
        cout << "\n-> Parameterized Constructor: A specific car has been created." << endl;
    }

    // 3. Copy Constructor
    
    Car(Car &ref)
    {
        make = ref.make;
        model = ref.model;
        year = ref.year;
        cout << "\n-> Copy Constructor: A car has been cloned." << endl;
    }

    // 4. Display Method (a getter)
    void display_Car()
    {
        cout << "   Car Details: " << year << " " << make << " " << model << endl;
    }
};

int main()
{
    // Requirement 1: Create a generic car
    Car showroom_placeholder;
    showroom_placeholder.display_Car();

    // Requirement 2: Create a specific car
    Car myCar("Toyota", "Camry", 2024);
    myCar.display_Car();

    // Requirement 3: Clone the specific car
    Car customerCar(myCar);
    customerCar.display_Car();

    return 0;
}

