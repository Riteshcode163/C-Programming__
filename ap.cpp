#include <iostream>
using namespace std;

int main(){ 
    int number;
   cout<<"Enter the number : ";// takes input
    cin>>number;
    int a = 4;

    for (int i = 1; i<=number; i++)
    {
     cout<<a<<"\n";
     a = a + 3;
    }
    
    return 0;
}