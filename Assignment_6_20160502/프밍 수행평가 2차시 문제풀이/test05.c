#include<stdio.h>
#include<conio.h>
int main() {
	char ch;
	printf("���� �Է� : ");
	scanf("%c", &ch);
	puts("---Output---");
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("�Է��Ͻ� ���ڴ� �������Դϴ�.\n");
	else if (ch >= '1' && ch <= '9')
		printf("�Է��Ͻ� ���ڴ� �����Դϴ�.\n");
	else
		printf("�Է��Ͻ� ���ڴ� Ư�������Դϴ�.\n");
	getch();
	return 0;
}