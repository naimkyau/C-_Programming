
// Call by Value & Call by Reference 

    // *******  Arrays  ********

#include <iostream>
using namespace std;

void callByValue(int a);
void callByReference(int &a);

int main() {
    int num1 = 10;
    int num2 = 20;

    // Calling Call by Value function
    cout << "Before Call by Value, num1: " << num1 << endl;
    callByValue(num1);
    cout << "After Call by Value, num1: " << num1 << endl

    // Calling Call by Reference function
    cout << "Before Call by Reference, num2: " << num2 << endl;
    callByReference(num2);
    cout << "After Call by Reference, num2: " << num2 << endl;

    return 0;
}

    // *******  Call by Value  ********
void callByValue(int a) {
    a = a + 5;
    cout << "Inside Call by Value, a: " << a << endl;
}

    // *******  Call by Reference  ********
void callByReference(int &a) {
    a = a + 5;
    cout << "Inside Call by Reference, a: " << a << endl;
}
