#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

void exch(int  arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void quick_sort_recursive(int arr[], int left, int right) {
	if(left >= right) return;

	int pivot = arr[left];
	int i = left+1;

	for(int j = left+1; j <= right; j++) {
		if(arr[j] < pivot)
			exch(arr, i++, j);

		exch(arr, left, --i);
		quick_sort_recursive(arr, left, i-1);
		quick_sort_recursive(arr, i+1, right);
	}
}

void quick_sort(int arr[], int n) {
	quick_sort_recursive(arr, 0, n-1);
}
