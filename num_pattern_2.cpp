// #include <iostream>
// using namespace std;

// int main(){
//     int number = 5;

//     for (int i = 0; i < 5; i++)
//     {
//         cout<< "1";
//        for (int  j = 1; j < i+1; j++)
//        {                                                  ////type num 1
//         cout<<j+1;
//        }
//        cout<<endl;
       
//     }
    
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int number = 5;
   
    int n =1;

    for (int i = 0; i < 5; i++)
    {
       
       for (int  j = 0; j < i; j++)
       {                                                  ////type num 2
        cout<< n++ ;
       }
       cout<<endl;
       
    }
    
    return 0;
}