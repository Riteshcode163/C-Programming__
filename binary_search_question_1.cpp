#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start+end) / 2;

        if (arr[mid] == key) {
            result = mid;
            end = mid - 1;  
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int result = -1;

    while (start <= end) {
      int mid = (start+end) / 2;

        if (arr[mid] == key) {
            result = mid;
            start = mid + 1;  
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int even[] = {0, 2, 2, 2, 2, 3};
    int size = sizeof(even) / sizeof(even[0]);
    int key = 2;

    int first = firstOccurrence(even, size, key);
    int last = lastOccurrence(even, size, key);

    
        cout << "First occurrence of " << key << " is at index: " << first << endl;
        cout << "Last occurrence of " << key << " is at index: " << last << endl;


    return 0;
}
