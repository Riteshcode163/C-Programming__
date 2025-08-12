#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";// takes input
    cin>>number;
    int num;

    for (int i = 1; i < number; i++)
    {
    if(number%i==0){
      //  cout<<i <<" FACTOR"<<"\n";// this will print all factors
       
        num=i;// this will do when number is divided by i it will store value in  num
    }
    }
    cout<<num;
    
    
    return 0;
}