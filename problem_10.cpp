//Project Euler Problem 10
#include <iostream>

using namespace std;

bool isPrime(int value){
    if(value <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(value); i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    long long total = 0;
    for(int i = 2; i < 2000001; i++){
        if(isPrime(i)){
            total += i;
        }
    }

    cout << total << "\n";
    return 0;
}