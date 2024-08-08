#include <stdio.h>
#include <unistd.h>

int main(){
	if(fork() && (!fork())){
		//if(fork() | fork()){
		if(fork() || fork()){
			fork();
		}
	}
	printf("print\n");
	return 0;
}
