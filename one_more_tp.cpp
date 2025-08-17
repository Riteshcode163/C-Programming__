#include <iostream>
using namespace std;

// int main(){
//     int number = 4;

//     for (int  i = 0; i < number; i++)

//     {
//         cout<< "1";
//         for (int  j = 1; j < i+1; j++)
//         {
//           cout<<j+1;
//         }
//         cout<<endl;
        
//     }
    
//     return 0;
// }





                  // do it in recerse;

    int main(){
    int number = 4;
    char ch = 'A';

    for (int  i = 0; i < number; i++)

    {
       
        for (int  j = i+1; j >0; j--)
        {
          cout<<ch;
         
          
        }
        
        cout<<endl;
        
    }
    
    return 0;
}