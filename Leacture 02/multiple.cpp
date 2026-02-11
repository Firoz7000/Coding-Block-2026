#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int multiple ;
    for(int i = 1; i <= 10; i++){
        multiple = i * n;
        cout << n << "x" << i << "=" << multiple << endl;

    }
    return 0;
}