#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum_of_digits(n - 1);
}

int main() {
    int sum = sum_of_digits(5);
    cout << "Sum of digits from 1 to 5 is: " << sum << endl;
    return 0;
}
