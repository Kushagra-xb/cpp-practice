#include <iostream>
#include <string>


void sortTwo(int& a, int& b){
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
}
        
    

int main(){
    int a{},b{};
    std::cout<<"enter qualifing time for driver 1: ";
    std::cin>>a;
    std::cout<<"enter qualifing time for driver 2: ";
    std::cin>>b;
    sortTwo(a, b);
    std::cout<<"fastest driver time order is : "<<a<<" "<<b<<'\n';;
    return 0;
}