#include<iostream>
using namespace std;
//write a function: 90INR is 1 usd
//USD TO INR
//INR TO USD
//Ask amount from user
//Then ask either 1 to be selected.1 usd to inr 2 inr to usd.

// Function to convert USD to INR
double usdToInr(double usd) {
    return usd * 90;   // 1 USD = 90 INR
}

// Function to convert INR to USD
double inrToUsd(double inr) {
    return inr / 90;   // 90 INR = 1 USD
}

int main() {
    int choice;
    int amount;
    cout << "1. USD to INR\n";
    cout << "2. INR to USD\n";
    cout << "Enter amount";
    cin >> amount;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nPrint = " << usdToInr(amount);
    }
    else if (choice == 2) {
        cout << "Print = " << inrToUsd(amount);
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}

