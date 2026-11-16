#include <iostream>
#include <string>

void penality(int raceTime, int penality){
    for(int i=0; i<penality; i++){
        raceTime += 5;
    }
    std::cout<<"new race time: "<<raceTime<<'\n';
}
int main(){
    int raceTime{};
    std::cout<<"enter race time: ";
    std::cin>>raceTime;
    int penaltyCount{};
    std::cout<<"enter penality: ";
    std::cin>>penaltyCount;
    penality(raceTime, penaltyCount);
   std::cout<<"final race time: "<<raceTime<<'\n';
    return 0;
}