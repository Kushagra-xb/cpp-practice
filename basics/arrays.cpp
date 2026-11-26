#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k=0;
    cin>>n;
   int arr[n];
   int tar=0;
   int found=0;
   
   cout<<"enter elements of arrays: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }cout<<endl;
    cout<<"enter target"<<endl;cin>>tar;
    for(int i=0;i<n;i++){
       if(tar==arr[i]){
        cout<<i+1<<" element u enter";
        break;
       }
    }
  
    
    return 0;
}