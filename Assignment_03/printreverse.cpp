#include <iostream>
using namespace std;

int main(){
	long n;
	cin >> n;
	long rev = 0;
	while(n>0){
		long x = n % 10;
		rev = rev * 10 + x;
		n /= 10;
	}
	cout << rev;
	return 0 ;
}