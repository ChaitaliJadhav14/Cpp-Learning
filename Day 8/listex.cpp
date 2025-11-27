#include <iostream>
#include <list>
using namespace std;
void printList(const list<int>& lst) {
for (int value : lst) {
cout << value << " ";
}
cout << endl;
}
int main() {
// Initialize list with values
list<int> myList{10, 20, 30, 40};
// Add elements
myList.push_front(5);
myList.push_back(50);
cout << "List after adding elements: ";
printList(myList);
// Remove elements
myList.pop_front();
myList.pop_back();
cout << "List after removing elements: ";
printList(myList);

// Access elements
cout << "First element: " << myList.front() << endl;
cout << "Last element: " << myList.back() << endl;
// Insert and erase
myList.insert(myList.begin(), 15);
myList.erase(myList.begin());
cout << "List after insert and erase: ";
printList(myList);
// Reverse and sort
myList.reverse();
myList.sort();
cout << "List after reverse and sort: ";
printList(myList);
return 0;
}