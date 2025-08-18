#include <iostream>
using namespace std;

int binarysearch(int arr[], int size , int key){

    int start=0;
    int end=size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]) {
            start = mid +1;


        }
        else end = mid-1;

        mid = (start+end)/2;
    }
    return -1;

}

int main(){
    int even[]={2,4,6,8,10};
    int size = sizeof(even)/sizeof(even[0]);
    int index = binarysearch(even , size , 10);

    cout<<"The value is at index :  "<<index;
    
    return 0;
}