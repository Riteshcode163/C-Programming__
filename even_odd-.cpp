#include <iostream>
using namespace std;

int main(){
    int n[]= {1,2,3,4,5,6,7,8,10};
    int x = 9;
    int even = 0;

    // Update the array with even numbers multiplied by 2
    for (int i = 0; i < x; i++) {
       if (n[i] % 2 == 0) {
           n[i] = n[i] * 2;
           even+=n[i];
       }
    }cout<<even<<endl;

    // Print the updated array
    for (int i = 0; i < x; i++) {
        cout << n[i] << " ";
    }
    
    return 0;
}
