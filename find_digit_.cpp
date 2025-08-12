#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: "; // takes input
    cin >> number;

    int count = 0;

    while (number > 0) { // counts how many digits are there in the given number
        number = number / 10;
        count++;
    }

    cout << count;

    return 0;
}
