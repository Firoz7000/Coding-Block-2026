#include <iostream>
using namespace std;
int main() {
   int a, b;
   cout << "Enter two numbers: ";
   cin >> a >> b;
   int max = (a > b) ? a : b;
   cout << "The maximum of " << a << " and " << b << " is: " << max << endl;
   
    return 0;
}