#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // The given input vector
    vector<int> numbers = {10, 2, 5, 10, 20, 5, 2, 10, 5};
    set<int> unique_numbers;

    // Iterate through each element of the vector and insert it into the set.
    for (int num : numbers) {
        unique_numbers.insert(num);
    }

    // Now, count the frequencies using the unique elements from the set.
    cout << "The frequency of each element is:" << endl;
    for (int unique_num : unique_numbers) {
        int count = 0;
        for (int num : numbers) {
            if (num == unique_num) {
                count++;
            }
        }
        cout << unique_num << " -> " << count << endl;
    }

    return 0;
}




