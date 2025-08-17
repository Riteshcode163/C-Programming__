#include <iostream>
using namespace std;





int main(){
    int number = 10;
     for (int  i = 1; i < number; i++)
     {
     int coef = 1;
       for (int  j = number-i; j > 0; j--)
       {
        cout<<" ";
       }
       for (int k = 1; k<i+1; k++)
       {
        cout<<coef<<" ";
        coef = coef*(i-k)/k;
       }
       cout<<endl;
       
       
     }
     
    return 0;
}