#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 1, j = 3;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    for (int k = 0; k < 5; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}