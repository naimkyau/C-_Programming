
// Function Overloading

#include <iostream>
using namespace std;


int add(int a, int b) { 
    return a + b;
}
float add(double a, double b) { 
    return a + b;
}

int main() {
    cout << "Sum of two int number    : " << add(5, 10) << endl;
    cout << "Sum of two float number  : " << add(5.5, 10.5) << endl; 
    return 0;
}
