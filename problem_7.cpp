//Project Euler Problem Seven
#include <iostream>

using namespace std;


bool isPrime(int value){
    for(int i = 2; i <= sqrt(value); i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int count = 0;
    int val = 1;
    while(count < 10001){
        val ++;
        if(isPrime(val)){
            count ++;
        }
    }

    cout << val << "\n";
    
    return 0;
}