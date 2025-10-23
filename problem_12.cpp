//Project Euler Problem Twelve
#include <iostream>
#include <cmath>

using namespace std;
int triangle(int num);


int main(){
    int divisors = 0;
    int index = 1;
    int sol;
    while(divisors < 250){
        sol = triangle(index);
        int temp_div = 0;
        for(int i = 1; i <= sqrt(sol); i++){
            if(sol % i == 0){
                temp_div += 1;
            }
        }
        if(temp_div > divisors){
            divisors = temp_div;
        }
        index++;
    }
    cout << sol << endl;
    return 0;
}


int triangle(int num){
    return num*(num+1)/2;
}