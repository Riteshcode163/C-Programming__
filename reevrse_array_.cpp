#include <iostream>
using namespace std;

int main() {
    int num[] = {12, 6, 7, 36, 9, 230, 2, 8};
    int length = sizeof(num) / sizeof(num[0]);

    for (int i = length - 1; i >= 0; i--) {
        cout << num[i] << " ";
    }

    return 0;
}
