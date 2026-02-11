#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int mid = (n + 1) / 2;

    for (int i = 1; i <= mid; i++) {

        for (int s = 1; s <= mid - i; s++) {
            cout << "  ";
        }

        for (int st = 1; st <= 2 * i - 1; st++) {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = mid - 1; i >= 1; i--) {

        for (int s = 1; s <= mid - i; s++) {
            cout << "  ";
        }

        for (int st = 1; st <= 2 * i - 1; st++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
