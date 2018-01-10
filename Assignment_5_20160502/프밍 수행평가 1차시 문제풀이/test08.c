#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c;
	int max, min;
	puts("Input Integer(3)");
	printf("Integer1 : ");
	scanf("%d", &a);
	printf("Integer2 : ");
	scanf("%d", &b);
	printf("Integer3 : ");
	scanf("%d", &c);
	max = a;
	max = (max > b) ? max : b;
	max = (max > c) ? max : c;
	min = a; 
	min = (min < b) ? min : b;
	min = (min < c) ? min : c;
	puts("---Output---");
	printf("Max : %d\n", max);
	printf("Min : %d\n", min);
	getch();
	return 0;
}