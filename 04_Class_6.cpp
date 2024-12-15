
// Header File & Operators

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    // *******  Arithmetic Operators  *******
    cout << "The value of a + b : " << a + b << endl;
    cout << "The value of a - b : " << a - b << endl;
    cout << "The value of a * b : " << a * b << endl;
    cout << "The value of a / b : " << a / b << endl;
    cout << "The value of a % b : " << a % b << endl;
    cout << "The value of a ++  : " << a++ << endl;
    cout << "The value of a --  : " << a-- << endl;
    cout << "The value of --a : " << ++a << endl;
    cout << "The value of --a : " << --a << endl << endl;

    // *******  Comparison Operator  ********
    cout << "The value of a == b : " << (a == b) << endl;
    cout << "The value of a != b : " << (a != b) << endl;
    cout << "The value of a < b : " << (a < b) << endl;
    cout << "The value of a > b : " << (a > b) << endl;
    cout << "The value of a <= b : " << (a <= b) << endl;
    cout << "The value of a >= b : " << (a >= b) << endl << endl;

    // *******  Logical Operators  ********
    cout << "Logical AND (a > b) && (b = a) " << ((a > b) && (b = a)) << endl;
    cout << "Logical OR  (a < b) || (b = a) " << ((a < b) || (b = a)) << endl;
    cout << "Logical NOT !(a == b)          " << !(a == b) << endl;


    return 0;
}