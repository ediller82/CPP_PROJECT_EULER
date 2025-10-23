//Project Euler Problem 2
#include <iostream>

using namespace std;

int Fib(int n);


int main(){
    int total = 0;
    int i = 1;
    while(Fib(i) <= 4000000){
        if(Fib(i) % 2 == 0){
            total += Fib(i);
        }
        i += 1;
    }
    
    cout << total << "\n";

    return 0;
}

int Fib(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    else{
        return Fib(n-1) + Fib(n-2);
    }
}