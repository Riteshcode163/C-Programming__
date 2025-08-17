#include <iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    
    cout<<"HOW MANY ROWS YOU WANT : ";
    cin>>rows; 

    cout<<"HOW MANY columns YOU WANT : ";
    cin>>columns; 
    
    
                       //  this is row number
    for (int i = 1; i <= rows; i++) // this outer loop is only for printing rows it this condition in loop becomes true it will go to inner loop
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << '*' << " "; // this is loop  which decide what to print in row;
        }
        cout << endl;
    }

    return 0;
}