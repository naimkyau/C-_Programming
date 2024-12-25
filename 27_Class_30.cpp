
// Parameterized Constructors

#include <iostream>
#include <cmath>
using namespace std;
/*
class Complex
{
    int a, b;
public:
// *******  Parameterized Constructors  ********
    Complex(int , int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(int x, int y)
{
    a = x;
    b = y;
    // cout << "Defult value of a = " << a << endl << "Defult value of b = " << b << endl;
}
*/
class PointDistance {
private:
    double x1, y1, x2, y2, d;
public:
    PointDistance(void){
        cout << "Enter the value of X1 : ";
        cin>> x1;
        cout << "Enter the value of Y1 : ";
        cin>> y1;
        cout << "Enter the value of X2 : ";
        cin>> x2;
        cout << "Enter the value of Y2 : ";
        cin>> y2;
        double a, b, c;
        a = (x1 - x2);
        b = (y1 - y2);
        c = ((a*a)+(b*b));
        d = sqrt(c);
    }
    void displayDistance(void) {
        cout << "Distance between (" << x1 << ", " << y1 << ") and (" 
             << x2 << ", " << y2 << ") is: " << d << endl;
    }
};




int main()
{
    /*
    Complex c1(4,6);            // Implicit Call
    Complex c2 = Complex (5,3); // Explicit Call
    c1.printNumber();
    c2.printNumber();
    */

    PointDistance a;
    a.displayDistance();
    return 0;
}
