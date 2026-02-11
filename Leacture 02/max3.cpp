#include <iostream>
using namespace std;

int main(){
    int nums[] = {14,9, 10};
    int size = 3;

    int largest = INT_MIN;
    for (int i = 0; i<size ; i++ ){
        largest = max(nums[i], largest);

    }

    cout << "the Maximum of 2 numbers : - "<< largest << endl;


    return 0;

}