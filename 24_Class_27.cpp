
// Friend Classes & Member Friend Functions

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int sumReal(Complex, Complex);
    int sumComplex(Complex, Complex);
};

class Complex
{
private:
    int a, b;
// *******  Friend Functions  ********
    friend int Calculator ::sumReal(Complex, Complex);
    friend int Calculator ::sumComplex(Complex, Complex);
// *******  Friend Classes  ********
    friend class Calculator;

public:
    void setNumber(int x1, int y1)
    {
        a = x1;
        b = y1;
    }
    void getNumber(void)
    {
        cout << "The complex number is \t: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumReal(Complex o1, Complex o2)
{
    int a = (o1.a + o2.a);
    return a;
}
int Calculator ::sumComplex(Complex o1, Complex o2)
{
    int b = (o1.b + o2.b);
    return b;
}

int main()
{
    cout << endl;
    Complex a1, b1;
    a1.setNumber(3, 5);
    a1.getNumber();
    b1.setNumber(4, 6);
    b1.getNumber();

    Calculator calc;
    int real = calc.sumReal(a1, b1);
    int complex = calc.sumComplex(a1, b1);

    cout << endl
         << "Sum of real number is \t: " << real << endl;
    cout << "Sum of comlex number is\t: " << complex << endl;
    cout << endl;
    return 0;
}
