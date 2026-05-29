#include <iostream>
using namespace std;

int sum(int a, int b) {
    int s = a + b;
    return s;
}   
int min(int a,int b){
    int m=(a<b?a:b);
    return m;
}
int main(){
    int a,b;
    cout<<"enter two no: ";
    cin>>a>>b;
    cout<<"sum is "<<sum(a,b)<<endl;
    cout<<"min is "<<min(a,b)<<endl;
}