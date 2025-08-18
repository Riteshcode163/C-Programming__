#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,77,8};
    int number;
    int size = sizeof(arr)/sizeof(arr[0]);

cout<<"Enter the number you want to find \n";
cin>>number;

for (int  i = 0; i < size; i++)
{
    if(number==arr[i]){
        cout<<"Number found at :"<< i <<" Index";
    }
}
cout<<"Number not found";




    return 0;
}