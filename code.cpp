#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter an integer: ";
  cin >> a;

  int sum = 0;

  for(int i=1;i<=a;i++){
     if(i%2 != 0){
    
        sum += i;

    }
  }
  cout << "The sum of odd numbers from 1 to " << a << " is: " << sum << endl;
  
  return 0;
}
