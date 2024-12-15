
// Reference Variables & Typecasting

#include <iostream>
using namespace std;

int c = 5;

int main() {
    int a, b, c;

    cout << "Enter the value of a : ";
    cin>> a;
    cout << "Enter the value of a : ";
    cin>> b;
    c = a + b;
    cout << c << endl;
    cout << ::c << endl;

    cout << "The size of 34.5  is : "<<sizeof(34.5) << endl;
    cout << "The size of 34.5f is : "<<sizeof(34.5f) << endl;
    cout << "The size of 34.5F is : "<<sizeof(34.5F) << endl;
    cout << "The size of 34.5l is : "<<sizeof(34.5l) << endl;
    cout << "The size of 34.5L is : "<<sizeof(34.5L) << endl;

// // ******* Reference Variables *******
    int x = 10;        
    int & y = x;      
    cout << "The value of x : " << x << endl;       
    cout << "The value of y : " << y << endl;  

// ******* Typecasting *******

    float m = 25.4;
    int q = (int)m;     // Explicit typecasting     Both are same 
    double r = double(m);     // Explicit typecasting     Both are same 
    long double s = m;          // Implicit typecasting

    cout <<"Float  p : "<<m << endl;
    cout <<"Int    q : "<<q << endl;
    cout <<"Double r : "<<r << endl;
    cout <<"Long   r : "<<s << endl;
    return 0;
}