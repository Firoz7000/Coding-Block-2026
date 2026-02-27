#include <iostream>
using namespace std;

long long trapWater(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    long long water = 0;
    
    int leftMax = 0, rightMax = 0;
    
    while(left <= right) {
        if(arr[left] <= arr[right]) {
            if(arr[left] >= leftMax) {
                leftMax = arr[left];
            } else {
                water += leftMax - arr[left];
            }
            left++;
        } else {
            if(arr[right] >= rightMax) {
                rightMax = arr[right];
            } else {
                water += rightMax - arr[right];
            }
            right--;
        }
    }
    
    return water;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << trapWater(arr, n) << endl;
    }
    
    return 0;
}