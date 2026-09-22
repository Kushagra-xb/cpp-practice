#include <bits/stdc++.h>
using namespace std;

int main(){

int w,b=1432;
int a,c;
cout<<"press 1 - check balance: "<<endl;
cout<<"press 2 - withdraw: "<<endl;
cin>>a;
if(a==1){
    cout<<"Your Account Balance is: $"<<b<<endl;
    return 0;

}else{
    cout<<"Enter the amount: "<<endl;
    cin>>w;}
    if( w%5!=0 || w+0.5>b){
        cout<<"invalid amount.."<<endl;
        return 0;
    }
    cout<<"enter PIN: "<<endl;
    cin>>c;
    if(c==1234){
        b-0.5;
            cout<<"Your Amount of "<<w<<" is been withdrawal."<<endl;
            cout<<"Charge of 0.5 is been deducted from Account."<<endl;
            cout<<"your current balance is: $"<<b;
            return 0;
    }else {cout<<"invalid pin.."<<endl;
    }

return 0; 
}
