#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
int main(){
	int x;
	if(x == INT_MIN) printf("%d",0);
	else{
		scanf("%d", &x);
	int y = 0;
	bool flag = false;
	if(x < 0){
		flag = true;
		x *= -1;
	}
	while(x != 0){
		int temp = x % 10;
		x /= 10;
		if(y > INT_MAX - temp/10) return 0;
		y = y * 10 + temp;
	}
	if(flag) y *= -1;
	printf("%d",y);
	}
}
