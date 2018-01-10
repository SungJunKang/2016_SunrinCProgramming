#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	char ch;
	printf("두 개의 정수와 사칙연산자를 순서대로 입력 : ");
	scanf("%d %d %c", &a, &b, &ch);
	puts("---Output---");
	switch (ch)
	{
	case '+':printf("%d %c %d = %d\n", a, ch, b,(a + b)); break;
	case '-':printf("%d %c %d = %d\n", a, ch, b, (a - b)); break;
	case '*':printf("%d %c %d = %d\n", a, ch, b, (a * b)); break;
	case '/':printf("%d %c %d = %.2f\n", a, ch, b, ((double)a / b)); break;
	default:printf("잘못입력하셨습니다.\n");break;
	}
	getch();
	return 0;
}