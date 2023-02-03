// convert from in to cm or cm to in using switch statements
// a suffix 'i' or 'c' indicates the unit of the input
// any other suffix is an error

#include "std_lib_facilities.h"

int main() {
    const double cm_per_inch = 2.54; // number of centimeters in an inch
    double length = 1.0; // length in inches or centimeters
    char unit = 'a';
    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    switch (unit) {
        case 'i':
            cout << length << "in == " << cm_per_inch*length << "cm\n";
            break;
        case 'c':
            cout << length << "cm == " << length/cm_per_inch << "in\n";
            break;
        default:
            cout << "Sorry, I don't know a unit called '"<< unit << "'.\n";
            break;
        }

    return 0;
}