// 

// #include <iostream>
// using namespace std;

// int main(){
//     int number = 4;
//     int num = 1;

//     for (int  i = 0; i < number; i++)
//     {
//        for (int  j = 0; j < i+1; j++)
//        {
//         cout<<num;
//         num++;//increasesnumber after iyeration and simply print it
//        }
//        cout<<endl;
       
//     }
    
//     return 0;
// }


//// character  version;





#include <iostream>
using namespace std;

int main(){
    int number = 4;
    int num = 1;
    char ch = 'A';

    for (int  i = 0; i < number; i++)
    {
       for (int  j = 0; j < i+1; j++)
       {
         cout<<ch<< " ";
         ch++;
       }
       cout<<endl;
       
    }
    
    return 0;
}