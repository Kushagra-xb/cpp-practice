#include <iostream>
using namespace std;

int coefficientN(int n ) {
    if (n  == 0) {
        return 1;
    }
    return n * coefficientN(n - 1);
}
int coefficientR(int r ) {
    if (r  == 0) {
        return 1;
    }
    return r * coefficientR(r - 1);
    
}
int main(){
    int n,r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    int binomial = coefficientN(n) / (coefficientR(r) * coefficientR(n - r));
    cout << " binomial coefficient = "<<binomial<<endl;
}