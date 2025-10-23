//Project Euler Problem Thirteen
#include <iostream>
#include <string>
#include <fstream>



using namespace std;

int main(){
    ifstream inputFile;
    inputFile.open("problem_13.txt");
    string line;
    long long int total = 0;
    while(getline(inputFile, line)){
        string str_num = line.substr(0,11);
        long long int ll_num = stoll(str_num);
        total += ll_num;
    }
    inputFile.close();
    cout << total << endl;

    return 0;
}