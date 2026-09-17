#include <bits/stdc++.h>
using namespace std;

int main(){
 cout<<"enter your name = "<<endl;
    string name;
 getline(cin,name);
 int age;
 double cgpa;
 char sec;
 cout<<"enter your age = "<<endl;cin>>age;
 cout<<"enter your cgpa = "<<endl;cin>>cgpa;
 cout<<"enter your section = "<<endl;cin>>sec;

 cout<<"Your Profile is -->"<<endl;
 cout<<"Name \t = \t"<<name<<endl;
 cout<<"Age \t = \t"<<age<<endl;
 cout<<"CGPA \t = \t"<<cgpa<<endl;
 cout<<"Section  = \t"<<sec;


     return 0;
}