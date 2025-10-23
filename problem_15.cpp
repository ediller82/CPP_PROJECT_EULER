//Project Euler Problem Fifteen
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>



using namespace std;
using namespace boost::multiprecision;

cpp_int nCk(cpp_int n, cpp_int k);
cpp_int factorial(cpp_int n);


int main(){
    cpp_int value = nCk(40,20);
    cout << value << endl;
    return 0;
}
cpp_int factorial(cpp_int n){
    cpp_int fact = 1;
    for(cpp_int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

cpp_int nCk(cpp_int n, cpp_int k){
    return factorial(n)/factorial(k)/factorial(n-k);
}