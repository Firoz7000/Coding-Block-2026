#include <iostream>
using namespace std;

int main(){
    int n;
    long fact = 1;
    cout << "enter the value of n ";
    cin>> n;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    cout << "Factorial of the given number : "<< n << " is "<< fact << endl;

    return 0;
}
