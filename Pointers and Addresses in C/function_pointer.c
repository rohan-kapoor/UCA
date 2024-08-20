#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

//int performOperation(int (*operation)(int, int), int a, int b) {
//	return operation(a,b);
//}

int performOperation(int (*operation)(int, int), int a, int b) {
	printf("%d\n", operation(a,b));
}

int main() {
	int (*func)(int, int);

	func = add;
	printf("%d\n", func(5,3));
	
	func = sub;
	printf("%d\n", func(5,3));

//	printf("%d\n", performOperation(add, 4, 9));

	performOperation(add, 9, 4);
	performOperation(mul, 9, 4);
	performOperation(sub, 9, 4);
	performOperation(div, 9, 4);
	
	return 0;
}
