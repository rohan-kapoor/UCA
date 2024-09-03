#include <stdio.h>
#include <stdlib.h>

void* custom_malloc(int num_of_bytes){
	void* ptr = malloc(num_of_bytes);
	
	for(int i=0; i < num_of_bytes; i++){
		char* curr_byte = (char*)(ptr) + i;
		*curr_byte = '\0';
	}
	return ptr;
}

int main(){
	int num_of_bytes = 12;
	char* arr = (char *)custom_malloc(num_of_bytes);
	for(int i = 0; i < num_of_bytes; i++){
		printf("%d",*(arr + i));
	}
}
