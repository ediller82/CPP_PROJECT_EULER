//Project Euler Problem 4
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    int large_palin = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            int value = i * j;
            string str_value = to_string(value);
            string temp = str_value;
            reverse(temp.begin(),temp.end());
            if(temp == str_value && value > large_palin){
                large_palin = value;
            }
        }
    }
    cout << large_palin << "\n";

    return 0;
}