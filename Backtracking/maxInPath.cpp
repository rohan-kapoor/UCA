#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, int n, int m, int curr, int &maxi, vector<vector<int>> arr){
	if (i == n-1 && j == m-1){
		curr += arr[n-1][m-1];
		maxi = max(maxi,curr);
		return;
	}
	curr += arr[i][j];
	if(i+1 < n) solve(i+1,j,n,m,curr,maxi,arr);
	if(j+1 < m) solve(i,j+1,m,m,curr,maxi,arr);
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(n,vector<int>(m));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	int curr = 0, maxi = 0;
	solve(0,0,n,m,curr,maxi,arr);
	cout << maxi;
}
