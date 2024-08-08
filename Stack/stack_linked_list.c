#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "stack.h"

struct Node{
	int item;
	struct Node* next;
};
typedef struct Node Node;

Node* head = NULL;
int N = 0;

void push(int item){
	Node* oldHead = head;
	head = (Node *)malloc(sizeof(Node));
	head -> item = item;
	head -> next = oldHead;
	N++;
}

int pop(){
	if(N == 0) return INT_MIN;
	int item = head -> item;
	Node* tmp = head;
	head = head -> next;
	free(tmp);
	N--;
	return item;
}

int size(){
	return N;
}

bool isEmpty(){
	return N == 0;
}

int testStack(){
	push(1);
	push(3);
	push(4);
	push(7);

	assert(!isEmpty());
	assert(size() == 4);

	//popping 7
	assert(pop() == 7);
	assert(size() == 3);

	//popping 4
	assert(pop() == 4);
	assert(size() == 2);

	//popping 3
	assert(pop() == 3);
	assert(size() == 1);

	//popping 1 (last item)
	assert(pop() == 1);
	assert(size() == 0);

	assert(isEmpty());
}

int main(){
	testStack();
	return 0;
}
