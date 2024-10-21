#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

typedef struct Node Node;
Node* head = NULL;
int N = 0;

void push(int item){
    Node* temp = head;
    Node* newHead = (Node*)malloc(sizeof(Node*));
    head = newHead;
    head->val = item;
    head->next = temp;
    N++;
}

int pop(){
    if(N == 0){
        printf("Stack Underflow");
        exit(1);
    }
    int item = head->val;
    Node* temp = head;
    head = head->next;
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

int top(){
    return head->val;
}

int main(){
    push(3);
    push(5);
    printf("%d\n", top());
    pop();
    printf("%d\n", size());
    pop();
    pop();
}