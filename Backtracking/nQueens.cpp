class Solution {
public:
    bool isSafe(int row, int col, vector<string> &temp, int n){
        int temp1 = row , temp2 = col ;
        row = temp1 - 1;
        while(row >= 0) if(temp[row--][col] == 'Q') return false;
        row = temp1 - 1; col = temp2 - 1;
        while(row >= 0 && col >= 0) if(temp[row--][col--] == 'Q') return false;
        row = temp1 - 1, col = temp2 + 1;
        while(row >= 0 && col < n) if(temp[row--][col++] == 'Q') return false;
        return true;
    }
    void solve(int row, vector<string> &temp, vector<vector<string>> &ans, int n){
        if(row == n){
            ans.push_back(temp);
            return;
        }
        for(int i = 0; i < n; i++){
            if(isSafe(row, i, temp, n)){
                temp[row][i] = 'Q';
                solve(row + 1, temp, ans, n);
                temp[row][i] = '.';
            }
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n,string(n,'.'));
        solve(0,temp,ans,n);
        return ans;
    }
};