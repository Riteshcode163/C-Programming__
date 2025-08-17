// #include <iostream>
// using namespace std;

// int main()
// {
//     int number = 4;                   //  this is row number
//     for (int i = 1; i <= number; i++) // this outer loop is only for printing rows it this condition in loop becomes true it will go to inner loop
//     {
//         char ch = 'A';
//         for (int j = 1; j <= number; j++)
//         {
//             cout << ch << " ";
//             ch = ch + 1; // in first row at first iteration it prints a then b  then c then d after loop over and next iteration same it prints a first
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int number = 3; 
    int num = 1;                  //  this is row number
    for (int i = 1; i <= number; i++) // this outer loop is only for printing rows it this condition in loop becomes true it will go to inner loop
    {
        //char ch = 'A';
        for (int j = 1; j <= number; j++)   // this prints the patterm  123
        {                                                                //456  // 789 beliw
            cout << num << " ";
            num++;
            
          
      
        }
        cout << endl;
    }

    return 0;
}