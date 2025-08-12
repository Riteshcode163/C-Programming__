#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"ENTER THE NUMBER : ";
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
       cout<<"THE MULTIPLICATION TABLE IS : ";
      cout << number << " x " << i << " = " << number * i << "\n";// remember this form
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if(i%2==0){
//             cout<<i<<" NUMBER IS EVEN"<<"\n";
//         }
//     }
//     return 0;
// }