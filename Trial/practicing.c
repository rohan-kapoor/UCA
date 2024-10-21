#include<stdio.h>
#include<stdlib.h>

void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// void bubble_sort(int* arr, int n){
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] > arr[j]) swap(arr,i,j);
//         }
//     }
// }

// void insertion_sort(int* arr, int n){
//     for(int i = 0; i < n; i++){
//         int j = i;
//         while(j > 0 && arr[j-1] > arr[j]){
//             swap(arr, j-1, j);
//             j--;
//         }
//     }
// }

// void merge(int* arr, int* aux, int left, int mid, int right){
//     for(int k = left; k <= right; k++) aux[k] = arr[k];

//     int i = left;
//     int j = mid + 1;

//     for(int k = left; k <= right; k++){
//         if(i > mid) arr[k] = aux[j++];
//         else if(j > right) arr[k] = aux[i++];
//         else if(aux[i] <= aux[j]) arr[k] = aux[i++];
//         else arr[k] = aux[j++];
//     }
// }

// void merge_sort_recursive(int* arr, int* aux, int left, int right){
//     if(left >= right) return;
//     int mid = left + ((right - left) / 2);

//     merge_sort_recursive(arr, aux, left, mid);
//     merge_sort_recursive(arr, aux, mid + 1, right);
//     merge(arr, aux, left, mid, right);
// }

// void merge_sort(int* arr, int n){
//     int* aux = (int*)malloc(n * sizeof(int));

//     merge_sort_recursive(arr, aux, 0, n-1);
//     free(aux);
// }

void quick_sort_recursive(int* arr, int left, int right){
    if(left >= right) return;

    int pivot = arr[left];
    int i = left + 1;

    for(int j = left + 1; j <= right; j++){
        if(arr[j] < pivot) swap(arr, i++, j);
    }
    swap(arr, --i, left);
    quick_sort_recursive(arr, left, i-1);
    quick_sort_recursive(arr, i+1, right);
}

void quick_sort(int* arr, int n){
    quick_sort_recursive(arr, 0, n-1);
}

int main(){
    int arr[] = {4,7,2,3,9,1};
    quick_sort(arr, 6);
    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}