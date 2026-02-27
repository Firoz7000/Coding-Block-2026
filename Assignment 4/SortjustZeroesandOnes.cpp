#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int x;
    long long countZero = 0;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 0) {
            countZero++;
        }
    }

    for(int i = 0; i < countZero; i++) {
        cout << 0 << " ";
    }

    for(int i = 0; i < n - countZero; i++) {
        cout << 1 << " ";
    }

    return 0;
}