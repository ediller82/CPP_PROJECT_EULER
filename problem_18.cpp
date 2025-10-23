//Project Euler Problem Eighteen
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

int max(int x, int y);

int main(){
    ifstream file("problem_18.txt");
    string line;
    int rows[15][15];
    int index = 0;
    int row_index;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        row_index = 0;
        while (getline(ss, token, ' ')) {
            rows[index][row_index] = stoi(token);
            row_index ++;
        }
        index++;
    }
    for(int i = 0; i < 14; i++){
        for(int j = 0; j < i + 2; j++){
            if(j == 0){
                rows[i+1][j] += rows[i][j];
                cout << rows[i+1][j] << endl;
            }
            else if(j == i + 1){
                rows[i+1][j] += rows[i][j-1];
            }
            else{
                rows[i+1][j] += max(rows[i][j], rows[i][j-1]);
            }
        }
    }
    int max_sum = 0;
    for(int i = 0; i < 15; i++){
        if(rows[14][i] > max_sum){
            max_sum = rows[14][i];
        }
    }
    cout << max_sum << endl;


    return 0;
}


int max(int x, int y){
    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}