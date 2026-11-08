#include <iostream>
using namespace std;

int main(){
    int r;
    float pi=3.14;
    float area=0,circumference=0;

    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;

    area=pi*r*r;
    circumference=2*pi*r;

    cout<<"Area of Circle: "<<area<<endl;
    cout<<"Circumference of Circle: "<<circumference<<endl;

    return 0;

    
}