#include <iostream>
 
double avg(int a, int b){
    return (a+b)/2.0;
}
int main(){
    int a{},b{};
    std::cin>>a>>b;
    std::cout<<avg(a,b);
}