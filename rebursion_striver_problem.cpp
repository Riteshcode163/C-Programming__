#include <iostream>
using namespace std;


 void num (int n, int count=1){
    if(count>5){
        return; 
    }
    cout<<"HELLO"<<endl;
    num(n,count+1);

}

int main(){
    num(5);
    
    return 0;
}