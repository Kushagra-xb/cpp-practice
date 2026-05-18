# include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Table of any number : ";
  cin>>n;

  int m;
  cout<<"Upto : ";
  cin>>m;
  
  for(int i=n;i<=n*m;i=i+n){
    cout<<n<<" x "<<i/n<<" = "<<i<<endl;
   return 0;
}
}