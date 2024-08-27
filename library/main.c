#include <stdio.h>
#include "header1.h" // add, sub, mul, div
#include "header2.h" // min, max, abs

int main() {

	int a = 20, b = 10;
	printf("Addition : %d\n", add(a,b));
	printf("Subtraction : %d\n", sub(a,b));
	printf("Divide : %d\n", div(a,b));
	printf("Multiplication : %d\n\n", mul(a,b));

	printf("Minimum : %d\n", min(a,b));
	printf("Maximum : %d\n", max(a,b));
	printf("Absolute: %d\n", absolute(a,b));

	
	return 0;
}
