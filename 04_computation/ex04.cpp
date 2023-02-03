// Exercise 4: user think of a number between 1 and 100
// computer will guess the number by asking no more than 7 questions

#include "std_lib_facilities.h"

int main() {
    cout << "Think of a number between 1 and 100.\n";
    int a = 1; // left boundary
    int b = 100; // right boundary
    int middle = 51; // middle of guess space
    char hint = ' '; // y/n from the user
    int i = 1; // count the number of questions
    int j = 0; // count the number of bad inputs

    while (a!=b) {
        middle = (a+b)/2;
        // compensate +1 to the right in case of inbalanced split
        if ((a+b)%2!=0) ++middle;
        cout << "(" << i << ") Is the number you are thinking of less than "
            << middle << "? (y/n)\n";
        cin >> hint;
        switch (hint) {
            case 'y':
                b = middle-1; // note question asks (strictly) less than
                ++i;
                break;
            case 'n':
                a = middle; // new left boundary includs the middle
                ++i;
                break;
            default:
                cout << "I didn't understand your input.\n";
                ++j;
                break;
        }

        // exit program in if too many bad inputs or questions
        if (j>5 || i>8) {
            cout << "Sorry, something went wrong!";
            return 1;
        }
    }

    cout << "Your number is " << a << "!\n";

    return 0;
}
