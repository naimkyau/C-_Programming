
// Constants, Manipulators & Operator Precedence

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // *******  Constants  ********
    int a = 6;                      // You can change the value 
    cout << "The value of a is : "<< a << endl;
    a = 5;      
    cout << "The value of a is : "<< a << endl;

    const int PI = 3.1416;          // You can't change the value 


    // *******  Manipulators  ********
    cout << "Hello" << endl;
    cout << setw(5) << 42<< endl;
    cout << setprecision(3) << 3.14159<< endl;
    cout << fixed << 3.14159<< endl;
    cout << showpoint << 10.5<< endl;
    cout << left <<setw(15)<< 123<<2<< endl;
    cout << right <<setw(15)<< 123<< endl;


    // *******  Operator Precedence  ********

    // 1. Parentheses (Highest Precedence)
    int result1 = (5 + 2) * 3;
    cout << "Parentheses: (5 + 2) * 3 = " << result1 << endl;

    // 2. Unary Operators (++/--/!/~)
    int x = 5;
    cout << "Unary (++): ++x = " << ++x << endl;

    // 3. Multiplication (*) and Division (/)
    int result2 = 10 * 2 / 5;
    cout << "Multiplication/Division: 10 * 2 / 5 = " << result2 << endl;

    // 4. Addition (+) and Subtraction (-)
    int result3 = 10 - 3 + 5;
    cout << "Addition/Subtraction: 10 - 3 + 5 = " << result3 << endl;

    // 5. Relational Operators (<, <=, >, >=)
    bool result4 = (5 < 10);
    cout << "Relational (<): 5 < 10 = " << result4 << endl;

    // 6. Equality Operators (==, !=)
    bool result5 = (5 == 5);
    cout << "Equality (==): 5 == 5 = " << result5 << endl;

    // 7. Logical AND (&&)
    bool result6 = (5 < 10 && 2 > 1);
    cout << "Logical AND (&&): (5 < 10 && 2 > 1) = " << result6 << endl;

    // 8. Logical OR (||)
    bool result7 = (5 > 10 || 2 > 1);
    cout << "Logical OR (||): (5 > 10 || 2 > 1) = " << result7 << endl;

    // 9. Assignment (=, +=, -=, etc.)
    int y = 10;
    y += 5; // Equivalent to y = y + 5
    cout << "Assignment (+=): y += 5 = " << y << endl;

    // 10. Comma (Lowest Precedence)
    int z = (x = 5, x + 10); // Assign x=5, then calculate x+10
    cout << "Comma: z = (x = 5, x + 10) = " << z << endl;


    return 0;
}