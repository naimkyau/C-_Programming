
// C++ Objects Memory Allocation & using Arrays in Classes

#include <iostream>
using namespace std;

class Shop
{
private:
    int _itemId[100];
    int _itemPrice[100];
    int _counter;

public:
    void initCounter(void);
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::initCounter(void)
{
    _counter = 0;
}
void Shop ::setPrice(void)
{
    cout << "Enter ID of your item\t\t: ";
    cin >> _itemId[_counter];
    cout << "Enter Price of your item\t: ";
    cin >> _itemPrice[_counter];
    _counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < _counter; i++)
    {
        cout << endl
             << i + 1 << "\t";
        cout << "ID\t" << _itemId[i] << endl;
        cout << "\tPrice\t" << _itemPrice[i] << endl;
    }
}

int main()
{
    Shop Niam;
    Niam.initCounter();
    Niam.setPrice();
    Niam.setPrice();
    Niam.setPrice();
    Niam.displayPrice();
    return 0;
}