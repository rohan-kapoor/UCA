#include <stdio.h>

void bubble_sort(int *arr, int n){
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubble_sort(arr, n);

	int key;
	scanf("%d",&key);
	int lower_bound = 0;
	int upper_bound = n-1;
	while(lower_bound <= upper_bound)
	{
		int mid = lower_bound + ((upper_bound - lower_bound) / 2);
		if(arr[mid] == key)
		{
			printf("Key Found, Bingo!!");
			break;
		}
		if(arr[mid] < key) lower_bound = mid + 1;
		else upper_bound = mid - 1;
	}
	if(lower_bound > upper_bound) printf("Key not found");
	return 0;
}
