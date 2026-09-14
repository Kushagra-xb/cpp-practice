#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"NO OF ELEMENTS: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    
    cout<<"Your elements are - ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
   
    int sum=0;
    int max=arr[0];
    int min=arr[0];

    for(int i =0;i<n;i++){
      
        sum +=arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    } cout<<"Sum is "<<sum<<endl;
    cout<<"Maximum is "<<max<<endl;
    cout<<"Minimum is "<<min<<endl;
return 0;
}