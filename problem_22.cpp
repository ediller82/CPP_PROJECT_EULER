//Project Euler Problem Twenty-Two

#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


int main(){
    long long total = 0;
    string names[5163];
    ifstream input("names.txt");
    ofstream output("names_rev.txt");
    char char_rem = '"';
    char ch;
    while(input.get(ch)){
        if(ch != char_rem){
            output.put(ch);
        }
    }
    input.close();
    output.close();
    remove("names.txt");
    rename("names_rev.txt", "names.txt");
    ifstream file("names.txt");
    int word_count = 0;
    string line, word;
    while(getline(file, line) and word_count < 5163){
        stringstream ss(line);
        while(getline(ss, word, ',') and word_count < 5163){
            word.erase(0, word.find_first_not_of(" \t"));
            word.erase(word.find_last_not_of(" \t") + 1);
            names[word_count++] = word;
        }
    }
    sort(names, names + 5163);
    for(int i = 1; i < 5164; i++){
        int score = 0;
        for(int j = 0; j < names[i-1].length(); j++){
            score += ((int)names[i-1][j])-64;
        }
        total += score*i;
    }
    cout << total << endl;
    return 0;
} 