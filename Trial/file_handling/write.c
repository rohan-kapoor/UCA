#include <stdio.h>

int main(){
	FILE* file = fopen("text_file.txt","w");

	char ch[1000];
	scanf("%[^\n]", ch);

	fprintf(file, "%s", ch);
	fclose(file);
	return 0;
}
