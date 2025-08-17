// #include <iostream>
// using namespace std;

// int main(){
//     int number = 5;
//     char ch = 'a';

//     for (int  i = 0; i < number; i++)
//     {
//       for (int j = 0; j < i+1; j++)           // alphabet pattern 1 
//       {
//        cout<<ch;
//       }
//       cout<<endl;
//       ch++;
        
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int number = 5;
//     char ch = 'a';

//     for (int i = 0; i < 5; i++)
//     {
      
//        for (int j = 1; j < i+1; j++)
//        {                                           //// alphabet pattern 2
//         cout<<ch++;
     
//        }
//        cout<<endl;
       
//     }
    
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int number = 5;
    
    for (int i = 0; i <= number; i++) {
        char ch = 'a'; // Reset character at the beginning of each row
        for (int j = 0; j < i+1; j++) {
            cout << ch++;
        }
        cout << endl;
    }
    
    return 0;
}
