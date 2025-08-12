#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";// takes input
    cin>>number;

   cout<<"you entered : ";//print what we given input
   cout<<number<<"\n";

   if(number<0){
    cout<<"the positive number is : ";// checks condition is number is less than zero means negative
    cout<<number*(-1);
    
   }

    return 0;
}