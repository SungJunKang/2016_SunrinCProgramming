#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	char ch;
	printf("�� ���� ������ ��Ģ�����ڸ� ������� �Է� : ");
	scanf("%d %d %c", &a, &b, &ch);
	puts("---Output---");
	switch (ch)
	{
	case '+':printf("%d %c %d = %d\n", a, ch, b,(a + b)); break;
	case '-':printf("%d %c %d = %d\n", a, ch, b, (a - b)); break;
	case '*':printf("%d %c %d = %d\n", a, ch, b, (a * b)); break;
	case '/':printf("%d %c %d = %.2f\n", a, ch, b, ((double)a / b)); break;
	default:printf("�߸��Է��ϼ̽��ϴ�.\n");break;
	}
	getch();
	return 0;
}