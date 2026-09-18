#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    float c;
    char op;

    cout << "enter a number = ";
    cin >> a;
    cout << "choose the operation = ";
    cin >> op;
    cout << "give another number = ";
    cin >> b;
   

    switch (op) {
        case '+':
            cout << "sum of "<<a<<" and "<<b<<" is " <<a + b;
            break;
        case '-':
            cout << "differance of "<<a<<" and "<<b<<" is " <<a - b;
            break;
        case '*':
            cout << "multiplication of "<<a<<" and "<<b<<" is " <<a * b;
            break;
        case '/':
             cout << "division of "<<a<<" and "<<b<<" is " <<a / b;
            break;
         case '%':
         c=a%b;
          cout << "remainder of "<<a<<" and "<<b<<" is " <<c;
         
          break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}