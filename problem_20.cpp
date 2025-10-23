//Project Euler Problem Twenty
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>

using namespace std;
using namespace boost::multiprecision;

cpp_int factorial(cpp_int n);

int main(){
    cpp_int f100 = factorial(100);
    string str_f100 = f100.str();
    int total = 0;
    for(int i = 0; i < str_f100.length(); i++){
        total += str_f100[i] - '0';
    }
    cout << total << endl;

    return 0;
}

cpp_int factorial(cpp_int n){
    cpp_int fact = 1;
    for(cpp_int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}