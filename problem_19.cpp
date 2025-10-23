//Project Euler Problem Nineteen
#include <iostream>

using namespace std;


int main(){
    int norm_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leep_months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sundays = 0;
    int day = 3;
    for(int i = 1901; i < 2001; i++){
        if(i % 4 == 0 && i % 400 != 0){
            for(int j = 0; j < 12; j++){
                for(int k = 1; k <= leep_months[j]; k++){
                    if(k == 1 && day == 1){
                        sundays ++;
                    }
                    if(day == 7){
                        day = 1;
                    }
                    else{
                        day++;
                    }
                }
            }
        }
        else{
            for(int j = 0; j < 12; j++){
                for(int k = 1; k <= norm_months[j]; k++){
                    if(k == 1 && day == 1){
                        sundays ++;
                    }
                    if(day == 7){
                        day = 1;
                    }
                    else{
                        day++;
                    }
                }
        }
        }
    }
    cout << sundays << endl;

    return 0;
}