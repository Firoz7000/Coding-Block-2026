#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size = 2 * N - 1;
    int mid = N - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int dist = abs(mid - i) + abs(mid - j);

            if (dist >= mid)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
