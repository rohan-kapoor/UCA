#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* array = NULL;
int N = 0;
int max_size = 8;

void resize_array(int new_size){
    if(N == 0) array = (int*)malloc(max_size * sizeof(int));
    else {
        int* array = (int*)realloc(array, new_size * sizeof(int));
    }
    max_size = new_size;
}

void push(int item){
    if(N == 0) resize_array(max_size);
    if(N == max_size) resize_array(max_size * 2);
    array[N++] = item;
}

bool isEmpty(){
    return N == 0;
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }
    int val = array[--N];
    if(N <= (max_size / 4)) resize_array(max_size / 2);
    return val; 
}

int size(){
    return N;
}

int top(){
    if(isEmpty()){
        printf("Stack is empty\n");
        exit(1);
    }
    return array[N-1];
}

int main(){

    push(1);
    push(4);
    push(7);
    push(5);
    pop();
    pop();
    printf("%d\n", top());
    printf("%d\n", size());

    free(array);
}