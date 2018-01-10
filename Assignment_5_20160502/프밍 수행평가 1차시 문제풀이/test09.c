#include<stdio.h>
#include<conio.h>
int main() {
	int cm;
	double feet;
	printf("Input Your Height(cm) : ");
	scanf("%d", &cm);
	feet = (double)cm / 30.48;
	puts("---Output---");
	printf("Convert(Cm -> feet) : %.2ffeet\n", feet);
	getch();
	return 0;
}