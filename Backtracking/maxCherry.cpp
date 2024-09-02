#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<vector<char>>& mat, int row, int col, int& maxCherry, int cur){
    if(i == row -1 && j == col - 1){
        if(mat[i][j] == '1') cur++;
        maxCherry = max(maxCherry, cur);
        return;
    }
    if(mat[i][j] == '1') cur ++;
    if(j + 1 < col) solve(i, j + 1, mat, row, col, maxCherry, cur);
    if(i + 1 < row) solve(i + 1, j, mat, row, col, maxCherry, cur);
    if(mat[i][j] == '1') cur--;
}

int main(){
    vector<vector<char>> matrix = {
        {'1', '0', 'X'},
        {'1', '1', '1'},
        {'1', '0', '1'}
    };
    int maxCherry = 0;
    solve(0, 0, matrix, matrix.size(), matrix[0].size(), maxCherry, 0);
    cout << maxCherry;
    return 0;
}