#include <iostream>
#include <cppconn/driver.h>
#include <cppconn/exception.h>

using namespace std;

int main() {
    try {
        sql::Driver *driver = get_driver_instance();
        cout << "MySQL Connector is working!" << endl;
    } catch (sql::SQLException &e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
