#include <iostream>
#include <cmath>
//operator overloading complex example....
using namespace std;

class Distance {
private:
    int feet;
    int inches;

    // Helper to normalize inches to less than 12
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        } else if (inches < 0) {
            // Handle negative inches (if required)
            int borrow = (std::abs(inches) + 11) / 12;
            feet -= borrow;
            inches += borrow * 12;
        }
    }

public:
    // Constructor
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        normalize();
    }

    // Display function
    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Friend operator overloads
    friend bool operator==(const Distance &d1, const Distance &d2);
    friend bool operator<(const Distance &d1, const Distance &d2);
};

// Equality operator
bool operator==(const Distance &d1, const Distance &d2) {
    return (d1.feet == d2.feet && d1.inches == d2.inches);
}

// Less-than operator
bool operator<(const Distance &d1, const Distance &d2) {
    if (d1.feet < d2.feet) return true;
    if (d1.feet == d2.feet && d1.inches < d2.inches) return true;
    return false;
}

// Main function to test
int main() {
    Distance d1(5, 14);  // Will normalize to 6 feet 2 inches
    Distance d2(6, 2);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    if (d1 == d2)
        cout << "Distances are equal" << endl;
    else if (d1 < d2)
        cout << "Distance 1 is smaller than Distance 2" << endl;
    else
        cout << "Distance 1 is greater than Distance 2" << endl;

    return 0;
}

