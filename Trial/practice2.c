#include <stdio.h>
#include <stdlib.h>

void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble_sort(int* arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]) swap(arr, i, j);
        }
    }
}

void insertion_sort(int* arr, int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr, j, j-1);
            j--;
        }
    }
}

void merge(int* arr, int* aux, int left, int right, int mid){
    for(int i = left; i <= right; i++) aux[i] = arr[i];

    int ind1 = left, ind2 = mid+1;

    for(int i = left; i <= right; i++){
        if(ind1 > mid) arr[i] = aux[ind2++];
        else if(ind2 > right) arr[i] = aux[ind1++];
        else if(aux[ind1] <= aux[ind2]) arr[i] = aux[ind1++];
        else arr[i] = aux[ind2++];
    }
}

void merge_sort_recursive(int* arr, int* aux, int left, int right){
    if(left >= right) return;
    int mid = left + ((right - left) / 2);

    merge_sort_recursive(arr, aux, left, mid);
    merge_sort_recursive(arr, aux, mid+1, right);
    merge(arr, aux, left, right, mid);
}

void merge_sort(int* arr, int n){
    int* aux = (int*)malloc(n * sizeof(int));

    merge_sort_recursive(arr, aux, 0, n-1);
    free(aux);
}

void quick_sort_recursive(int* arr, int left, int right){
    if(left >= right) return;

    int pivot = arr[left];
    int i = left + 1;
    
    for(int j = left + 1; j <= right; j++){
        if(arr[j] < pivot) swap(arr, j, i++);
    }
    swap(arr, left, --i);
    quick_sort_recursive(arr, left, i-1);
    quick_sort_recursive(arr, i+1, right);
}

void quick_sort(int* arr, int n){
    quick_sort_recursive(arr, 0, n-1);
}


int main(){
    int arr[] = {1,7,3,4,2,9,5,3};
    // bubble_sort(arr, 8);
    // insertion_sort(arr, 8);
    // merge_sort(arr, 8);
    quick_sort(arr, 8);
    for(int i = 0; i < 8; i++) printf("%d ", arr[i]);
    return 0;
}