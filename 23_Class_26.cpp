
// Friend Functions

#include <iostream>
using namespace std;

class Number{
private:
    int a, b;
    friend Number sumNumber(Number o1, Number o2);
public:
    void setNumber(int x, int y){
        a = x;
        b = y;
    }
    void getNumber(){
        cout << "( " << a << " + " << b <<" ) = "<<a+b << endl;
    }
};

Number sumNumber(Number o1, Number o2){
    Number o3;
    o3.a = (o1.a + o2.a);
    o3.b = (o1.b + o2.b);
    cout << "( "<<o1.a << " "<<o2.a<< " )" << endl;
    cout << "( "<<o1.b << " "<<o2.b<< " )" << endl;
    cout << "--------" << endl;
    cout << "( "<<o3.b << " "<<o3.b<< " )" << endl;
} 

int main() {
    Number a1, b1;

    a1.setNumber(1, 2);
    a1.getNumber();
    b1.setNumber(3, 4);
    b1.getNumber();

    cout << endl;
    sumNumber(a1, b1);
    return 0;
}