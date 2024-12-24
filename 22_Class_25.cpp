
// Array of Objects & Passing Objects as Function Arguments

#include <iostream>
using namespace std;

// *******  Array of Objects  ********
class Students
{
private:
    static int count;
    int id_;
    string name_;

public:
    void setId(void)
    {
        cout << "\t" << "       - - - - - - - -       " << endl;
        cout << "Enter the ID of student " << (count + 1) << "\t: ";
        cin >> id_;
        cout << "Enter the NAIM of student " << (count + 1) << "\t: ";
        cin >> name_;
        cout << "\t" << "       - - - - - - - -       " << endl
             << endl;
        count++;
    }
    void getId(void)
    {
        cout << "\t" << "=============================" << endl;
        cout << "The ID of " << "the student is \t: " << id_ << endl;
        cout << "The NAME of the student is \t: " << name_ << endl;
        cout << "\t" << "=============================" << endl
             << endl;
    }
};
int Students ::count;

// *******  Passing Objects as Function Arguments  ********
class Complex
{
private:
    int a;
    int b;
public:
    void setData(int x, int y){
        a = x;
        b = y;
    }
    void setSumData(Complex o1, Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(void){
        cout << "The complex number is : "<< a << " + "<< b << "i" << endl;
    }
};
int main()
{
    cout << "\n";

    // Array of Objects
    int n = 2;
    Students ninja[n];
    for (int i = 0; i < n; i++)
    {
        ninja[i].setId();
        ninja[i].getId();
    }

    // Passing Objects as Function Arguments
    Complex a1, b1, c1;

    a1.setData(2, 3);
    a1.printNumber();

    b1.setData(4, 5);
    b1.printNumber();

    c1.setSumData(a1, b1);
    c1.printNumber();

    cout << "\n";
    return 0;
}