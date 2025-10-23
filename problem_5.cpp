//Project Euler Problem Five
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int x, int y);



int main(){

    int min_val = 1;
    for(int i = 1; i < 21; i++){
        min_val *= i/gcd(i,min_val);
            }

    cout << min_val << "\n";
    return 0;
}


int gcd(int x, int y){
    int a = max(x,y);
    int b = min(x,y);
    while(a%b != 0){
        int temp = a;
        a = b;
        b = temp % b;
    }
    return b;
}