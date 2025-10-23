//Project Euler Problem Six
#include <iostream>

using namespace std;

int main(){
    int sum_sq = 0;
    for(int i = 1; i < 101; i++){
        sum_sq += i*i;
    }
    int result = 5050*5050 - sum_sq;
    cout << result << "\n";
    return 0;
}

