#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i == 0 || i == N - 1) {
                cout << "*\t";
            }
            else if (i == mid) {
                if (j == 0 || j == N - 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }
            else {
                if (j == 0 || j == 1 || j == N - 2 || j == N - 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}
