#include <iostream>
#include <string>


int points(int position){
    switch(position){
        case 1: return 25;
        case 2: return 18;
        case 3: return 15;
        case 4: return 12;
        case 5: return 10;
        case 6: return 8;
        case 7: return 6;
        case 8: return 4;
        case 9: return 2;
        case 10: return 1;
        default: return 0;
    }
}
int main() {
    std::string name;
    int position{};
    int races{};
    int sum{0};

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout<<"no of races: "<<'\n';
    std::cin>>races;
    std::cout<<"Enter your position in each race: "<<'\n';
    for(int i{1};i<=races;i++){
        std::cin>>position;
     
        sum += points(position);
    }
   

   
    std::cout << name << ", you scored " << sum << " points!" <<'\n';

    return 0;
}