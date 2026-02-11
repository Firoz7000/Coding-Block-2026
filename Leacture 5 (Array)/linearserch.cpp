#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
    bool found = false;
    for(int i = 0; i < 5; i++){
        if(arr[i] == key){
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Element not found in the array." << endl;
    }
    return 0;
}