#include <stdio.h>

int compareAsc(int a, int b) {
	return a - b;
}

int compareDesc(int a, int b) {
	return b - a;
}

void sort(int arr[], int size, int (*compare)(int, int)) {
	for(int i = 0; i < size - 1; i++) {
		for(int j = 0; j < size - i - 1; j++) {
			if(compare(arr[j], arr[j + 1]) > 0) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = { 4, 3, 8, 1, 0, 3, 5};
	int size = 7;

	sort(arr, size, compareAsc);
	printArray(arr, size);
	sort(arr, size, compareDesc);
	printArray(arr, size);
	return 0;
}
