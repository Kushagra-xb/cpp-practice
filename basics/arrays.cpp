#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter marks of 5 subjects: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int n;
    cout<<"Enter the subject number to display marks: "<<endl;
    cin>>n;
    cout<<"Marks of subject "<<n<<" is: "<<arr[n-1]<<endl;
    return 0;
   
}