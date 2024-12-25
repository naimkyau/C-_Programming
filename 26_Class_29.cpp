
// Default Constructors

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
// *******  Default Constructors  ********
    Complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)     // ----> This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
    cout << "Defult value of a = " << a << endl << "Defult value of b = " << b << endl;
}

int main()
{
    Complex c1;
    return 0;
}
