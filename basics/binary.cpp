#include <iostream>
using namespace std;

int btodec(int n){
    int ans = 0, pow =1;
    while (n>0){
        int rem = n%10;
    ans += rem*pow;
    n /=10;
    pow *= 2;
    
} return ans;
}
int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    cout<<btodec(n)<<endl;
    return 0;
}