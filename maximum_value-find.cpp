#include <iostream>
using namespace std;

int main(){
    int arr[]={1,232,4545,76879};
    int first = arr[0];

    for (int i = 1; i < 4; i++)
    {
       if(first < arr[i]){
        first = arr[i];
       }
    }
    cout << first;
    
    return 0;
}
