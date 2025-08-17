// #include <iostream>
// using namespace std;

// /*

//      * 
//     * * 
//    * * *                                  /////TRIANGLE PATEERN 1    
//   * * * * 
//  * * * * *


// */

// int main(){
//     int number = 5;
//      for (int  i = 0; i < number; i++)
//      {
//        for (int  j = number-i; j > 0; j--)
//        {
//         cout<<" ";
//        }
//        for (int k = 0; k<i+1; k++)
//        {
//         cout<<"* ";
//        }
//        cout<<endl;
       
       
//      }
     
//     return 0;
// }



#include <iostream>
using namespace std;


/* * * * * * 
  * * * * 
   * * * 
    * * 
     * 



*/

int main(){
    int number = 5;


    for (int  i = 0; i < 5; i++)
    {
      for (int k = 0; k < i+1; k++)
      {
        cout<<" ";
      }
      for (int  j = 0; j < number-i; j++)
      {
       cout<<"* ";
      }
      cout<<endl ;
      
      
    }
    
    return 0;
}