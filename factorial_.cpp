#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 4;
    int result = factorial(number); // Store the result of factorial(5)
    cout << "The factorial of " << number << " is: " << result << endl; // Print the result
    
    return 0;
}
