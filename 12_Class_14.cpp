// Structure, Union & Enum


#include <iostream>
using namespace std;

// *******  Enum  ********
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// *******  Structure  ********
struct Date {
    int day;
    int month;
    int year;
};

// *******  Union  ********
union Data {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    
    Day today = Wednesday;
    cout << "Today is day number " << today << " (Wednesday).\n";


    Date birthDate;
    birthDate.day = 22;
    birthDate.month = 12;
    birthDate.year = 1998;
    cout << "Birth Date: " << birthDate.day << "/" << birthDate.month << "/" << birthDate.year << endl;


    Data myData;
    myData.intVal = 10;
    cout << "Union storing integer: " << myData.intVal << endl;
    
    myData.floatVal = 3.14;
    cout << "Union storing float: " << myData.floatVal << endl;

    myData.charVal = 'A';
    cout << "Union storing character: " << myData.charVal << endl;

    return 0;
}
