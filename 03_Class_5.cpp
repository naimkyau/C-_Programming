
// Basic Input/Output

#include <iostream>
using namespace std;

int main() {
        // '<<' Insertion operator
        // '>>' Extraction operator
        int num1, num2;
        cout << "Enter the value of num 1 : ";
        cin>> num1;
        cout << "Enter the value of num 2 : ";
        cin>> num2;
        cout << "The value of num1 is : " << num1 << endl;
        cout << "The value of num2 is : " << num2 << endl << endl;
        cout << "The sum of num1 and num2 is : "<<num1+num2 << endl; 
        
    return 0;
}