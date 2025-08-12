// 
// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//     cout << "Enter the number: "; // takes input
//     cin >> number; 
//     int sum = 0;  // Initialize sum to store the sum of digits

//     while (number > 0) {
//         int a = number % 10; // Get the last digit of the number
//         sum += a; // Add the digit to the sum stores every lsst digit and add it to next iteration last digit
//         number = number / 10; // Remove the last digit
//     }

//     cout << "Sum of digits: " << sum; // Output the sum of digits

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: "; // takes input
    cin >> number; 
    int product = 1;  // Initialize sum to store the sum of digits

    while (number > 0) {
        int a = number % 10; // Get the last digit of the number
        product *= a; // Add the digit to the sum stores every lsst digit and add it to next iteration last digit
        number = number / 10; // Remove the last digit
    }

    cout << "Sum of digits: " << product; // Output the sum of digits

    return 0;
}

