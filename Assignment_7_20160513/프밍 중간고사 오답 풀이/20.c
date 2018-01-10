#include<stdio.h>
void main() {
	int n = 10;
	int b = 8;
	while (b != 0) {
		printf("%d", n / b);
		n %= b;
		b /= 2;
	}
}