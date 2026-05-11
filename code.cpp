#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<" sum of no's till n = ";
  cin>>n;

  int sum=0;

  for(int i=1;i<=n;i++) {
    sum +=i;
    if (i ==7) {
      break;
    }
  }
  cout<<"sum "<<sum;
  return 0;
}
