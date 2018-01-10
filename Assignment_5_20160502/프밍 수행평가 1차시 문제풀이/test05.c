#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c;
	puts("Input Integer(3).");
	printf("Integer1 : ");
	scanf("%d",&a);
	printf("Integer2 : ");
	scanf("%d", &b);
	printf("Integer3 : ");
	scanf("%d", &c);
	puts("---Output---");
	printf("1. Multiply is %d\n",(a*b*c));
	printf("2. Divide is %.2f\n",((double)a/b)/c);
	printf("3. Add is %d",(a+b+c));
	getch();
	return 0;
}