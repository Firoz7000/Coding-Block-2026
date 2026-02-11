#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        
        for (int star = 1; star <= i; star++) {
            cout << "* ";
        }

        for (int space = 1; space <= n-i; space++) {
            cout << " ";
        }


        cout << endl;
    }

    for (int i = 2; i <= n; i++) {

        for (int star = 1; star <= i; star++) {
            cout << "* ";
        }
         for (int space = 1; space <= n-i; space++) {
            cout << "  ";
        }

        cout << endl;
    }

    return 0;
}
