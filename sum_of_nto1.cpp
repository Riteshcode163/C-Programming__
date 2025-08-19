#include <iostream>
using namespace std;

int num(int n){
    if(n==0){
        return 0;
    }
    return n+num(n-1);

}

int main(){
    int sum = num(5);
    cout<<sum;
    
    return 0;
}