
// Functions & Function Prototypes

#include <iostream>
using namespace std;

// *******  Function Prototypes  ********
int add(int a, int b);
int subtract(int a, int b);
void printMessage();

int main() {
    int num1 = 10, num2 = 5;

    int sum = add(num1, num2);
    int difference = subtract(num1, num2);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;

    printMessage();

    return 0;
}

// *******  Function Definitions  ********
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void printMessage() {
    cout << "This is a simple function demo!" << endl;
}
