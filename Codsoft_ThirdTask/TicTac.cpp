#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<char>>& grid, char ch){

    // check for rows
    for(int i=0; i<3; i++){
        int cnt = 0;
        for(int j=0; j<3; j++){
            if(grid[i][j] == ch) cnt++;
        }
        if(cnt == 3) return true;
    }

    // check for columns
    for(int i=0; i<3; i++){
        int cnt = 0;
        for(int j=0; j<3; j++){
            if(grid[j][i] == ch) cnt++;
        }
        if(cnt == 3) return true;
    }

    // check for diag 1
    int cnt = 0;
    int idx = 0;
    for(int i=0; i<3; i++){
        if(grid[idx][i] == ch) cnt++;
        idx++;
    }
    if(cnt == 3) return true;

    // check for diag 2
    idx = 2;
    cnt = 0;
    for(int i=0; i<3; i++){
        if(grid[idx][i] == ch) cnt++;
        idx--;
    }
    if(cnt == 3) return true;
    return false;
}

bool checkDraw(vector<vector<char>>& grid){
    int cnt = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i][j] == '.') cnt++;
        }
    }
    return cnt == 0;
}

void print(vector<vector<char>>& grid){
    cout << "Grid is" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    vector<vector<char>> grid(3, vector<char>(3, '.'));
    bool user1 = true;          // true -> O, false -> X
    while(true){
        if(check(grid, 'O')){
            cout << "User 1 is winner !";
            break;
        }
        else if(check(grid, 'X')){
            cout << "User 2 is winner !";
            break;
        }
        else if(checkDraw(grid)){
            cout << "The Game is Draw !";
            break;
        }
        print(grid);
        int i, j;
        if(user1){
            cout << "Enter the position of O ";
            cin >> i >> j;
            grid[i][j] = 'O';
        }
        else{
            cout << "Enter the position of X ";
            cin >> i >> j;
            grid[i][j] = 'X';
        }
        user1 = !user1;
    }
    return 0;
}