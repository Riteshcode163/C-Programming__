#include <iostream>
using namespace std;

int main(){
       int MARKS[] = {1, 2, 1}; 
       int n = sizeof(MARKS)/4;
       int next[]={1,2,1};
       for (int  i = n-1; i >= 0; i--)
       {
        cout<<MARKS[i]<<" ";////////////array is reversed
       }
       for (int  i = 0; i < n; i++)
       {
      if(MARKS[i]!=next[i]){
        cout<<" ITE IS not PALINDROME";
      }
      else
      cout<<" palindrome";
       }
       
       



    
    return 0;
}