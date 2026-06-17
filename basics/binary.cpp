#include <iostream>
using namespace std;

int dectoB(int decnum){
    int ans =0,pow =1;
    while (decnum>0){

        int rem = decnum%2;
        decnum /= 2;
        
        ans += rem*pow;
        pow *= 10;;
       

    } return ans; 

} 
int main(){

   for(int i=2;i<=50;i++){
    cout<<"The binary equivalent of "<<i<<" is: "<<dectoB(i)<<endl;
   }
   
   return 0;  
}