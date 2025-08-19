#include <iostream>
using namespace std;
void num(int n  ){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    num(n-1);
}

int main(){
    num(3);
    
    
    return 0;
}