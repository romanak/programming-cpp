// Exercise 9: calculate the number of grains the inventor asked for

#include "std_lib_facilities.h"

int main() {
    int current_grains = 1;
    int sum_grains = 1;

    for (int square = 1; square < 65; ++square) {
        current_grains *= 2;
        sum_grains += current_grains;
        cout << "square " << square << " has " << current_grains
            << " grains, total: " << sum_grains << endl;
    }
    
    cout << "================================" << endl;
    double current_grains2 = 1;
    double sum_grains2 = 1;

    for (int square = 1; square < 65; ++square) {
        current_grains2 *= 2;
        sum_grains2 += current_grains2;
        cout << "square " << square << " has " << current_grains2
            << " grains, total: " << sum_grains2 << endl;
    }

    return 0;
}
