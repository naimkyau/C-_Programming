
// Nesting of Member Functions

#include <iostream>
#include <string.h>
using namespace std;

class binary
{
private:
    string a;
    void chk_bin(void);
public:
    void read(void);
    void once(void);
};
void binary ::read(void)
{
    // a = "111000";
    cout << "Enter a binary number\t: ";
    cin >> a;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            cout << "!!! Incorrect binary number !!!" << endl;
            exit(0);
        }
    }
}
void binary ::once(void)
{
    chk_bin();
    string onecComp = a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '0'){
            onecComp.at(i) = '1';
        }
        else{
            onecComp.at(i) = '0';
        }
    }
    cout << "One's complement\t: " << onecComp << endl;
}

int main()
{
    binary naim;
    naim.read();
    naim.once();
    return 0;
}