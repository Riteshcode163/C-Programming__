#include <iostream>
using namespace std;

int main(){
    int number = 4;
    for (int i = 0; i < number; i++)//int i = 0; now i = 1
    {
     for (int j = 0; j < i+1; j++) // je is less than i+1 = 1  , j= 0 is less than 2 
     {
       cout<<i+1;
     }
     cout<<endl;
     
    }
    
    
    return 0;
}