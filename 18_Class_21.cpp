
// Classes, Public and Private access modifiers

#include <iostream>
using namespace std;

// *******  Classes  ********
class Student {
    private:        // *******  Private access modifiers  ********
        float marks;
    public:         // *******  Public access modifiers  ********
        void mark(int a);
        int roll, id;
};

void Student :: mark(int a){
    a = marks;
}

int main() {
    Student naim;
    float a;
    // naim.marks = 57;         //This will throw error.This is privet .
    naim.roll = 24;
    naim.id = 102;
    cout << "Enter the marks : ";
    cin>> a;
    naim.mark(a);
    cout << endl;
    cout << "The merks is\t: "<< a << endl;
    cout << "The roll is\t: "<< naim.roll << endl;
    cout << "The id is\t: "<< naim.id << endl;
    return 0;
}