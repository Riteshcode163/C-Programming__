#include <iostream>
using namespace std;

int main(){
    int number1;
    int number2;
    int number3;
    int number4;

    cout<<"GIVE THE VALUE OF FIRST NUMBER : ";
    cin>>number1;

    cout<<"GIVE THE VALUE OF SECOND NUMBER : ";
    cin>>number2;
    
    cout<<"GIVE THE VALUE OF THIRD NUMBER : ";
    cin>>number3;
    
    cout<<"GIVE THE VALUE OF FOURTH NUMBER : ";
    cin>>number4;


    if(number1>number2 && number1>number3 && number1>number4){
        cout<<"FIRST NUMBER IS BIGGER ";
    }

    if(number2>number1 && number2>number3 && number2>number4){
        cout<<"SECOND NUMBER IS BIGGER ";
    }

    if(number3>number1 && number3>number2 && number3>number4){
        cout<<"THIRD NUMBER IS BIGGER ";
    }

    if(number4>number1 && number4>number2 && number4>number3){
        cout<<"FOURTH NUMBER IS BIGGER ";
    }
    

    return 0;
}