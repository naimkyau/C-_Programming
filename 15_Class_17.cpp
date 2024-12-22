
// Inline Functions, Default Arguments & Constant Arguments

#include <iostream>
using namespace std;

// *******  Inline Function  ********
inline int square(int x) {
    return x * x;
}

// *******  Default Arguments  ********
void printDetails(string name = "Unknown", int age = 0) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

// *******  Constant Arguments  ********
void display(const int &a) {
    // a = a + 5; // Uncommenting this line will give a compile-time error
    cout << "The constant value is: " << a << endl;
}

int main() {
    // Inline Function usage
    int num = 5;
    cout << "The square of " << num << " is: " << square(num) << endl;

    // Function with Default Arguments
    printDetails(); // Uses default values
    printDetails("John", 30); // Passes values to override defaults

    // Function with Constant Arguments
    int val = 100;
    display(val);

    return 0;
}
