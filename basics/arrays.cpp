#include <bits/stdc++.h>
using namespace std;

int main(){
 int u;
 int bill;
 cout<<"how many units of elec consumed = "<<endl;cin>>u;
 if(u<=100){
   bill=u*5;
   cout<<"your elec bill is "<<bill<<endl;
   return 0;
 }else if(u<=200){
   bill=u*7;
    cout<<"your elec bill is "<<bill<<endl;
    return 0;
 }else
   {
      bill=u*10;
      cout<<"your elec bill is "<<bill<<endl;
    return 0;
   }
     return 0;
}