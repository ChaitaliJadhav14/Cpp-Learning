enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
#include <iostream>
using namespace std;

//enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//              0    1        2         3          4        5       6
//enum week { Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7 };
int main()
{
    week today;
    today = Wednesday;//3
    cout << "Day " << today+1;//4
    return 0;
}
//create enum of coffee size regular=100,tall=200,tower=350
//given base price of coffe and milk genertate values of coffees
//example user input:coffee 30+ milk 50 --regular 70 tall 140...and so on 
//multiply the base cost with type of coffee you select.
