#include<stdio.h>
#include<conio.h>
int main() {
	char a;
	printf("Input character : ");
	scanf("%c", &a);
	printf("Characer : %c %c %c %c\n",a,a+1,a+2,a+3);
	printf("ASCII code : %d %d %d %d\n", a, a + 1, a + 2, a + 3);
	getch();
	return 0;
}