#include <iostream>
using namespace std;

int main(){
    int marks[] = {1,2,3,4,5,6,7,8,9,0};  
    int size = sizeof(marks)/4;// this sixeof operator count size of array

    for (int  i = 0; i < size; i++)
    {
      cout<<marks[i]<<" ";
    }
    
    return 0;
}