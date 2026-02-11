#include <iostream>
using namespace std;

int main(){
    float p, r, t, si;

    cout << "Enter the value of principle :" << endl;
    cin>> p;
    cout << "Enter the tie taken  : "<< endl;
    cin>> t;
    cout << "Enter the rate of interest :"<< endl;
    cin>>r;
 
    si = (p * r * t )/ 100;

    cout << " Simple interest : " << si << endl;

    return 0;
}