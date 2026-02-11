#include <iostream>
using namespace std;
int main(){
    int arr[5] = {0, 1, 2, 3, 4};
    int n = 5;
    // Inverse the array
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    // Print the inverted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}