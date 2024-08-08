#include <stdio.h>

int main(){
	FILE* file = fopen("text_file.txt","r");
	int ch;
	while((ch = fgetc(file)) != EOF){
		putchar(ch);
	}
	return 0;
}
