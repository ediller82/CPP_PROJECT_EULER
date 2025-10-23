//Project Euler Problem Sixteen

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>



using namespace std;
using namespace boost::multiprecision;

cpp_int power(cpp_int x, cpp_int y);


int main(){
    cpp_int value = power(2,1000);
    string str_val = to_string(value);
    int total = 0;
    for(int i = 0; i < str_val.length(); i++){
        total += str_val[i] - '0';
    }

    cout << total << endl;

    return 0;
}

cpp_int power(cpp_int x, cpp_int y){
    cpp_int val = 1;
    for(cpp_int i = 0; i < y; i++){
        val *= x;
    }
    return val;
}