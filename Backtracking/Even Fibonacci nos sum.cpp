#include <bits/stdc++.h>
using namespace std;

//int solve(int n,int num1,int num2, int sum){
//	if((num1 + num2) > n) return sum;
//	
//	if((num1 + num2) % 2 == 0) sum += num1 + num2;
//	solve(n, num2, num1 + num2, sum);
//}

int solve(int n, int num1, int num2){
	if((num1 + num2) > n) return 0;
	
	int curr = ((num1 + num2) % 2 == 0)?(num1 + num2) : 0;
	return curr + solve(n, num2, num1 + num2);
}

int main(){
	int n;
	cin >> n;
	cout << solve(n, 0, 1);
}