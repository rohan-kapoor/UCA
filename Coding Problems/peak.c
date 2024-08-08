#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	int left = 0;
	int right = n - 1;
	while(left < right){
		int mid = left + (right - left) / 2;
		if(arr[mid] < arr[mid+1]) left = mid + 1;
		else right = mid;
	}
	printf("%d",left);
	return 0;
}
