#include <iostream>
using namespace std;

int main(){
    int array[5]={1,2,3,4,5,};
    int product = 1;

    for (int i = 0; i < 5; i++)
    {
       
       product*=array[i];
      
    }cout<<product;
    
    return 0;
}