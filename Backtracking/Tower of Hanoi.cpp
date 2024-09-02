#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char source, char destination, char helper){
	if(n == 0) return;
	
	TowerOfHanoi(n-1, source, helper, destination);
	cout << "Move disk " << n << " from " << source << " to " << destination << endl;
	TowerOfHanoi(n-1, helper, destination, source);
}

int main(){
	int n;
	cin >> n;
	TowerOfHanoi(n, 'A', 'C', 'B');
	cout << pow(2,n) - 1;
	return 0;
}