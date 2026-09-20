#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,m=0;
 cout<<"enter any no = "<<endl;
 cin>>n;
while(n!=0){
 n=n/10;
m++;
}cout<<m;
    return 0;
}