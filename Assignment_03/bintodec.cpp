#include <iostream>
using namespace std;

long long binToDecimal(long long binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /=10;
        pow *=2;
    }

    return ans;
}

int main(){
	long long n;
	cin>>n;

        cout << binToDecimal(n) << endl;
        return 0 ;
    }