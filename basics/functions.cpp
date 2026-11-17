#include <iostream>
#include <string>

int LapTime(int min,int sec , int ms){
    int total_time = (min *60000)+(sec*1000)+ms;
    return total_time;
}
int main(){
    int min{},sec{},ms{},min2{},sec2{},ms2{};
    std::cout<<"enter the time of driver 1: "<<'\n';
    std::cin>>min>>sec>>ms;
    int total_time1 = LapTime( min, sec, ms);
    std::cout<<"enter the time of driver 2: "<<'\n';
    std::cin>>min2>>sec2>>ms2;
    int total_time2 = LapTime(min2,sec2,ms2);
    if(total_time1<total_time2){
        std::cout<<"Driver 1 is faster than Driver 2 by: "<<total_time2 - total_time1<<'\n';
    }else if (total_time1>total_time2){
        std::cout<<"Driver 2 is faster than Driver 1 by: "<<total_time1 - total_time2<<'\n';
    }else{
        std::cout<<"Tie 00"<<'\n';
    }
}