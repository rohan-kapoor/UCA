#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int temp;
	priority_queue<int> pq;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		pq.push(temp * -1);
	}
	int k;
	cin >> k;
	while(k--){
		cout << pq.top() * -1 << " ";
		pq.pop();
	}
}