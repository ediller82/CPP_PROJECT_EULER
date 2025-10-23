//Project Euler Problem Fourteen
#include <iostream>


using namespace std;

int Collatz(long long int num); //Returns the length of the Collatz sequence for a number

int main(){
    int sol = 1;
    int max_length = 1;
    int temp;
    for(long long int i = 1; i <= 1000000; i++){
        temp = Collatz(i);
        if(temp > max_length){
            sol = i;
            max_length = temp;
        }
    }
    cout << sol << endl;
    return 0;
}

int Collatz(long long int num){
    int length = 1;
    long long current = num;
    while(current != 1){
        if(current % 2 == 0){
            current /= 2;
            length ++;
        }
        else if(current % 2 == 1){
            current = 3*current + 1;
            length ++;
        }
    }
    return length;
}