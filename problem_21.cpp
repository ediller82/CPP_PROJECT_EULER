//Project Euler Problem 21

#include <iostream>
#include <cmath>

using namespace std;

int div_sum(int n);

int main(){

    int total = 0;
    int temp1;
    int temp2;
    
    for(int i = 0; i < 10001; i++){
        temp1 = div_sum(i);
        temp2 = div_sum(temp1);
        if(temp2 == i and temp1 != i){
            total += i;
        }
    }

    cout << div_sum(4) << endl;
    cout << total << endl;
    return 0;
}

int div_sum(int n){
    int tot = 1;
    if(n == 0){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i ++){
        if(n % i == 0 && i != sqrt(n)){
            tot += n/i;
            tot += i;
        }
        else if (n % i == 0 && i == sqrt(n)){
            tot += i;
        }
    }
    return tot;
}