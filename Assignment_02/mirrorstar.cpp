#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i <= mid; i++) {

        for (int space = 1; space <= mid - i; space++) {
            cout << "\t";
        }

        for (int star = 1; star <= 2 * i + 1; star++) {
            cout << "*\t";
        }

        cout << endl;
    }

    for (int i = mid - 1; i >= 0; i--) {

        for (int space = 1; space <= mid - i; space++) {
            cout << "\t";
        }

        for (int star = 1; star <= 2 * i + 1; star++) {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}
