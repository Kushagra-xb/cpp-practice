#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c; char d,e;
   float eq;

   cin>>a;cout<<"x^2 ";cout<<" ";cin>>d;cin>>b;cout<<"x ";cin>>e;cout<<" ";cin>>c;

   cout<<" your eq is "<<a<<"x^2 "<<d<<" "<<b<<"x "<<e<<" "<<c<<endl;;

    

    eq  = (-b + sqrt( b * b - 4 * a * c) ) / 2 * a;
    cout<<eq<<"\a";



    return 0;
}