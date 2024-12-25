    
    // Constructor Overloading
    
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;
    
public:
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1; 
    rect1.display();

    Rectangle rect2(4.0, 5.0); 
    rect2.display();

    return 0;
}
