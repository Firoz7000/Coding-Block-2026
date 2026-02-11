#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }

        int gap = 2 * (N - i) - 1;
        for (int k = 1; k <= gap; k++) {
            cout << "\t";
        }

        for (int j = i; j >= 1; j--) {
            if (i == N && j == i) continue; 
            cout << j << "\t";
        }

        cout << endl;
    }
    return 0;
}
