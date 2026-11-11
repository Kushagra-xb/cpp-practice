#include <iostream>
#include <string>
/* D1. bool isPrime(int n). Call it in main and print all primes from 1 to 20.

D2. Overload area: one version takes one double (circle radius, use 3.14159), the other takes two double values (rectangle). Print both from main.

D3. A function template swapValues(T& a, T& b) that swaps two values. Test it with two ints and two doubles.

D4. int countDigits(int n) that returns how many digits n has (for example, 4821 gives 4). Loops are fine here.

D5. int power(int base, int exp = 2) using a loop. power(5) should give 25 and power(2, 10) should give 1024.

D6. Challenge: void sortTwo(int& a, int& b) that rearranges the two variables so a holds the smaller value and b the larger. Test it with int x{ 9 }, y{ 4 };.*/

void sortTwo(int&a , int&b){
    if(a>b){
        int temp =a;
        a=b;
        b=temp;
    }else{
        int temp =b;
        b=a;
        b=temp;
    }
    }
int main(){
    int x{9},y{4};
    sortTwo(x,y);
    std::cout<<x<<" "<<y;
}
