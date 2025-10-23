//Project Euler Problem 3
#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(long long value){
    for(long long i = 2; i <= sqrt(value); i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long value = 600851475143;
    long long lp_fact = 1;
    for(long long i = 2; i <= sqrt(value); i++){
        if(isPrime(i) && value % i == 0){
            lp_fact = i;
        }
    }
    cout << lp_fact << "\n";
    return 0;
}
