#include <iostream>
using namespace std;

int main() {
    int n = 7;   

    for (int i = 1; i <= n; i++) {

        if (i == (n + 1) / 2) {
            cout << endl;
            continue;
        }

        for (int j = 1; j <= n; j++) {

            if (i == 1 || i == n) {
                if (j <= 3 || j > n - 3)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else if (i < (n + 1) / 2) {
                if (j <= 2 || j == n - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else {
                if (j == 2 || j >= n - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
