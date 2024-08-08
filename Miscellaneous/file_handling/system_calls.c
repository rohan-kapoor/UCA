#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int fd1 = open("text_file.txt", O_CREAT | O_RDWR);
	if(fd1 == -1){
		perror("fd1");
		exit(1);
	}

	int fd2 = open("text_file2.txt", O_CREAT | O_RDWR);
	if(fd2 == -1){
		perror("fd2");
		exit(1);
	}

	char* buff[1000];
	int cnt = read(fd1, buff, 1000);

	write(fd2, buff, cnt);
	if(close(fd1) < 0){
		perror("close");
	}
	close(fd1);
	close(fd2);
}
