#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter your age : ";
  cin >> age;

  bool hasId = true;
 
  if (age>=18){
    if(hasId){
      cout<<"Entry allowed";
     } else {
        cout<<"No ID , entry denied";
      }
    }else {
      cout<<"Too Young";
    }
  return 0;
}
