#include <stdio.h>

int swap(int *arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;    
}

int bubble_sort(int* arr, int *arr2, int n){
    for(int i = 0; i < n-1; i++){
        for(int j= i; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, i, j);
                swap(arr2, i, j);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr_time[n];
    int burst_time[n];
    int total_time = 0;
    for(int i = 0; i < n; i++){
        printf("Enter arrival time of process %d: ", i+1);
        scanf("%d", & arr_time[i]);
        printd("\nEnter burst time: \n");
        scanf("%d", &burst_time[i]);
        total_time += burst_time[i];
    }
    int time_slice;
    printf("Enter time slice: \n");
    scanf("%d", &time_slice);
    bubble_sort(arr_time, burst_time, n);

    int waiting_time = 0;
    int turn_around_time = 0;
    int rem_process = n;
    int ind = -1;
    int curr_burst = 0, curr_time = 0;
    while(total_time){
        ind = (ind+1) % n;
        if(arr_time[ind] < curr_time) continue;
        
    }
}