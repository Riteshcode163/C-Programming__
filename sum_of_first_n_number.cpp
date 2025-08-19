#include <iostream>
using namespace std;

void sum(int n, int current_sum = 0) {
    if (n < 1) {
        cout << current_sum;
        return;
    }
    sum(n - 1, current_sum + n);
}

int main() {
    int n;
    cin >> n;
    sum(n);
    return 0;
}
