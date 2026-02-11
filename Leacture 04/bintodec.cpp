#include <iostream>
using namespace std;

int main(){
    int binary = 0; int decimal = 0; int base = 1;
    cin >> binary;
    while(binary > 0){
        int n = binary % 10;
        decimal = decimal + n * base;
        base = base * 2;
        binary = binary / 10;
    }
    cout << decimal;
}