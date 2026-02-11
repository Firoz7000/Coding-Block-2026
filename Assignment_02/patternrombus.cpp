#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {

        for (int space = 1; space <= N - i; space++) {
            cout << "\t";
        }

        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num << "\t";
            num++;
        }

        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num << "\t";
            num--;
        }

        cout << endl;
    }

    for (int i = N - 1; i >= 1; i--) {

        for (int space = 1; space <= N - i; space++) {
            cout << "\t";
        }

        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num << "\t";
            num++;
        }

        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num << "\t";
            num--;
        }

        cout << endl;
    }

    return 0;
}
