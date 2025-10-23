//Project Euler Problem Seventeen
#include <iostream>


using namespace std;


int main(){
    int total = 0;
    total += 7*900;
    total += 3*891;
    total += 190*(3+3+5+4+4+3+5+5+4);
    total += 100*(6+6+5+5+5+7+6+6);
    total += 10*(3+6+6+8+8+7+7+9+8+8);
    total += 11;
    cout << total << endl;
    return 0;
}