#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: "; // takes input
    cin >> number;

    int sum1 = 0;

    while (number != 0)
    {
        int a = number % 10;  // Get the last digit
        sum1 += a;            // Add the digit to sum1
        number = number / 10; // Remove the last digit
        cout << a << "\n";    // Print the digit
    }

    cout << "Sum of digits: " << sum1 << endl;

    return 0;
}
