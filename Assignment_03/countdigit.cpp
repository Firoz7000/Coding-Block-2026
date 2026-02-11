#include <iostream>
using namespace std;

long long count (long n , int digit){
	int count  = 0;
	while(n > 0){
	int temp = n % 10;
	if(temp == digit)
	count++;
	
	n = n/10;
	}
	return count;
}
int main(){
	long long n;
	int digit;
	cin >> n >> digit;
	cout << count(n, digit);
	return 0 ;
}