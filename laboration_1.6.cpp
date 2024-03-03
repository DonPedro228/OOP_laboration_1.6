#include "DateT.h"
#include <iostream>
using namespace std;

int main() {


    Date date;


    date.Read();


    cout << "Initial date:" << endl;
    date.Display();

    date.IncrementField();
    cout << "Date after incrementing fields: " << date.toString() << endl;
    date.Display();

    int days;
    cout << "Input count of days: "; cin >> days;
    date.IncrementDate(days);


    cout << "Date after incrementing by " << days << " days:" << endl;
    date.Display();

    return 0;
}