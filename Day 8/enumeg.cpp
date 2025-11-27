//create enum of coffee size regular=100,tall=200,tower=350
//given base price of coffe and milk genertate values of coffees
//example user input:coffee 30+ milk 50 --regular 70 tall 140...and so on 
//multiply the base cost with type of coffee you select.

#include <iostream>


using namespace std;

enum CoffeeSize {
    Regular = 1,
    Tall = 2,
    Tower = 3
};

int main() {
    
    int coffeeBasePrice,milkBasePrice ;
    cout<<"\nEnter base cost of Coffee and Milk\n";
    cin>>coffeeBasePrice>>milkBasePrice;

    int totalBaseCost = coffeeBasePrice + milkBasePrice;

    int regularPrice = totalBaseCost * Regular;
    int tallPrice = totalBaseCost * Tall;
    int towerPrice = totalBaseCost * Tower;


    cout << "Prices of Coffee:" << endl;
    cout << "-----------------" << endl;
    cout << "Regular: " << regularPrice << " (Base Cost: " << totalBaseCost << " * Multiplier: " << Regular << ")" << endl;
    cout << "Tall: " << tallPrice << " (Base Cost: " << totalBaseCost << " * Multiplier: " << Tall << ")" << endl;
    cout << "Tower: " << towerPrice << " (Base Cost: " << totalBaseCost << " * Multiplier: " << Tower << ")" << endl;

    return 0;
}


