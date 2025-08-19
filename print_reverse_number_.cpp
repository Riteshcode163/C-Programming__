// #include <iostream>
// using namespace std;
// int print_reverse(int n){
//     if(n==0){
//         return n;
//     }
//     cout<<n<<endl;// this will print n = 5
//     print_reverse(n-1); // this will call function and tell him to do 5 - 1
// }

// int main(){

// print_reverse(5);////////////////////////////////this will print 5 4 3 2 1
    
//     return 0;
// }




                    ///WHAT IF WE HAVE TO PRINT 12345 so simple thing




                    #include <iostream>
using namespace std;
int print_reverse(int n ){
   
    if(n==0){
        return n;
    }
    print_reverse(n-1); // this will call function and tell him to do 5 - 1
    
    
    cout<<n<<endl;// this will print n = 5
}

int main(){

print_reverse(5);////////////////////////////////this will print 1 2 3 4 5 
    
    return 0;
}


