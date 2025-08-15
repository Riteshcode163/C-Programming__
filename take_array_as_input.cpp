#include <iostream>
using namespace std;

int main(){
    int marks[5];

    for (int  i = 0; i < 5; i++)
    {
        cout<<"enter your marks : ";
       cin>>marks[i];
       cout<<"marks "<<i+1<<" is : "<<marks[i]<<endl;
    }
    
    return 0;
}