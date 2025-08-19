#include <iostream>
using namespace std;

void number(int n, int current = 1) {
    if (current > n) {
        return;
    }
    cout << current << endl;
    number(n, current + 1);
}

int main() {
    number(5);
    return 0;
}
 