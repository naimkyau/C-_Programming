
// for, while and do-while loops

#include <iostream>

using namespace std;
int main()
{

    /*For loop in C++*/
    cout << "With for loop "<< endl;
    for (int i = 1; i <= 4; i++)
    {
        cout << i << endl;
    }


    /*While loop in C++*/
    {cout << "With while loop "<< endl;
    int i = 1;
    while (i <= 4)
    {
        cout << i << endl;
        i++;
    }
    }
    

    //  Printing 1 to 40 using while loop
    {cout << "With do while loop " << endl;
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 4);
    }

    return 0;
}
