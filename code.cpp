#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter a number: ";
  cin>>n;

  bool isprime = true;
  for (int i=2;i<n;i++){
    if(n%i==0){
      isprime=false;
      break; 
    } 
    }
  if (isprime){
    cout<<n<<" is a prime number.";
  }
  else{
    cout<<n<<" is not a prime number.";
  }
  

  return 0;
}
