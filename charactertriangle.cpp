#include <iostream>
using namespace std;

int main(){
    int number = 5;
     char ch = 'A';

    for (int  i = 0; i < 5; i++)
    {
        for (int  j = 0; j < i+1; j++)
        {
           cout<< ch;
        }
        cout<<endl;
        ch=ch+1;
        
    }
    
    return 0;
}