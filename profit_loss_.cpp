#include <iostream>
using namespace std;

int main(){
    int selling_price;
    int real_price;
    cout<<"ENTER THE SELLING PRICE : ";
    cin>>selling_price;

    cout<<"ENTER THE REAL PRICE : ";
    cin>>real_price;

    if(selling_price>real_price){
        cout<<"YOU HAVE DONE PROFIT OF : ";
        cout<<selling_price-real_price;
    }

    else if(selling_price<real_price){
        cout<<"YOU HAVE DONE LOSS OF : ";
        cout<<real_price-selling_price;
    }
    return 0;
}