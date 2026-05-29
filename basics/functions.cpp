#include <iostream>
using namespace std;

double factorial(double n){
    double fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    double n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"Factorial of 5 is "<<factorial(5)<<endl;
    cout<<"Factorial of 10 is "<<factorial(10)<<endl;
    return 0;
}