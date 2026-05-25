#include <iostream>
using namespace std;

int isEven(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }

    }
    int main(){
        int num;
        cout<<"Enter any no ";
        cin>>num;

        if(isEven(num)){
            cout<<"Number is even";
        }
        else{
            cout<<"Number is odd";
        }
        return 0;
    }
