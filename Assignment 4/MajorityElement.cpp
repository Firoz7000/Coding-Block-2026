#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
        }
        
        if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    return candidate;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << majorityElement(arr, n);
    
    return 0;
}