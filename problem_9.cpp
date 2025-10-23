//Project Euler Problem Nine
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int val = 1;
    for(int i = 1; i < 1000; i++){
        for(int j = 1; j < 1000; j++){
            if(i != j){
                double c = i*i + j*j;
                c = sqrt(c);
                if(c == (int) c && i + j + c == 1000){
                    val = i*j*c;
                    break;
                }
            }
            if(val != 1){
                break;
            }
        }
    }
    cout << val << "\n";

    return 0;
}