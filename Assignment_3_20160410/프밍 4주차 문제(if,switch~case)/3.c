#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main() {
	char a;
	printf("���� ���� �Է� : ");
	scanf("%c", &a);
	puts("---��� ���---");
	if (isalpha(a)) 
		printf("�Է��� ���� '%c'�� �����Դϴ�", a);
	else if (isdigit(a)) 
		printf("�Է��� ���� '%c'�� �����Դϴ�", a);
	else 
		printf("�Է��� ���� '%c'�� Ư�������Դϴ�", a);
	getch();
	return 0;
}