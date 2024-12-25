
// More Friend Functions

#include <iostream>
using namespace std;

// *******  Part 1  ********

class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num;
}

// *******  Part 2  ********
class C2;
class C1
{
private:
    int val1;
    friend void exchange(C1 &, C2 &);

public:
    void setData(int a)
    {
        val1 = a;
    }
    void getData(void)
    {
        cout << "value 1 = " << val1 << endl;
    }
};
class C2
{
private:
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void setData(int a)
    {
        val2 = a;
    }
    void getData(void)
    {
        cout << "value 2 = " << val2 << endl;
    }
};
void exchange(C1 &x, C2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    // *******  Part 1  ********
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(15);
    add(a1, b1);

    // *******  Part 2  ********
    C1 d1;
    C2 d2;
    cout << "Before Exchange " << endl;
    d1.setData(2);
    d1.getData();
    d2.setData(52);
    d2.getData();
    cout << "After Exchange " << endl;
    exchange(d1, d2);
    d1.getData();
    d2.getData();

    return 0;
}