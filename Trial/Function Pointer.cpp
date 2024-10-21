#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
	return a + b;
}

int (*funcPointer)(int a, int b) = add;

int main(){
	cout << (*funcPointer)(3, 6);
}