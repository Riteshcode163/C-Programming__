#include <iostream>
using namespace std;

int digit(int x) {
    int sum = 0;
    while (x > 0) {
        int last_digit = x % 10;
        x = x / 10;  // Update x with the result of the division

        sum += last_digit;
    }
    return sum;
}

int main() {
    cout << digit(1234) << endl;  // Added endl to move to the next line
    return 0;
}
