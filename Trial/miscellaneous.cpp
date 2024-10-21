#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
	return a + b;
}

int (*funcPtr)(int a, int b) = add;

int main(){
	cout << (*funcPtr)(2,6);
}