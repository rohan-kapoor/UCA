#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

typedef struct Node Node;
Node* front = NULL;
Node* rear = NULL;
int N = 0;

void enqueue(int item){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = item;
    if(!rear) front = newNode;
    else rear->next = newNode;
    rear = newNode;
    N++;
}

int dequeue(){
    if(!front){
        printf("Queue is empty\n");
        return -1;
    }
    int item = front->val;
    Node* temp = front;
    front = front->next;
    free(temp);
    N--;
    return item;
}

int size(){
    return N;
}

int isEmpty(){
    return N == 0;
}

int get_front(){
    return front->val;
}

int main(){
    enqueue(4);
    enqueue(5);
    printf("%d\n", get_front());
    dequeue();
    printf("%d", size());
}