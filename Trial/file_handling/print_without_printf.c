#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main() {
	char s[] = "Hello World";
	write(1,s,strlen(s));
	return 0;
}
