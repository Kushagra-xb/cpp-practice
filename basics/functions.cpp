#include <iostream>

template <typename T>
T minimum (T a, T b){
    return (a>b)? b:a;
}
int main(){
    double a{},b{};
    std::cin>>a>>b;
    std::cout<<minimum( a , b )<<'\n';
}
