#include <iostream>
using namespace std;
void num(int n , int c =1){
if(c>n) return;
cout<<c;
num(n,++c);
}

int main(){
    int n;
    cin>>n;

    num(n);
    
    return 0;
}