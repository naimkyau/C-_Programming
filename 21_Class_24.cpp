
// Static Data Members &  Static Member Functions

#include <iostream>
using namespace std;

class Counter {
    static int count;           // *******  Static Data Members  ********
public:
    Counter() {
        count++; 
    }
    static int getCount() {     // *******  Static Member Functions  ********
        return count;
    }
};

int Counter::count;

int main() {
    Counter c1, c2, c3; 
    cout << "Number of objects created: " << Counter :: getCount() << endl; 
    return 0;
}
