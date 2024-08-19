#include <stdio.h>

int invert(int x, int p, int n) {
	return (((~(~0 << n)) << p) ^ x); //or can use -1
}

int bitAnd(int x, int y) {
	return (~(~x | ~y));
}

int bang(int x) {
	return ((x >> 31) & 1  |  ((~x+1) >> 31) & 1) ^ 1;
}

int conditional(int x, int y, int z) {
	return (((!!x << 31 >> 31) & y) + ((!x << 31 >> 31) & z));
}

int main() {
	printf("%d\n",invert(7,3,2));
	printf("%d\n",bitAnd(49,27));
	printf("%d\n",bang(5));
	printf("%d\n",bang(0));
	printf("%d\n",conditional(0,3,5));
	printf("%d\n",conditional(1,3,5));
	return 0;
}
