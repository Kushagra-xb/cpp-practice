#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 int sum=0;
 cout<<"enter any no = "<<endl;
 cin>>n;
 if(n>0){
  cout<<n<<" is a positive no."<<endl;
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<endl;
    sum+=i;
  }cout<<"sum is "<<sum;
 } else if (n<0){cout<<n<<" is negative no."<<endl;
 }else cout<<n<<"is zero.";
    return 0;
}