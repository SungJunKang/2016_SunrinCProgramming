#include<stdio.h>
#include<conio.h>
int main() {
	char a;
	printf("���� ������ �Է� : ");
	scanf("%c", &a);
	puts("---��� ���---");
	if (a >= 97 && a <= 122)
		printf("�Է��� ���� '%c'�� �ҹ��� �Դϴ�.", a);
	else if (a >= 65 && a <= 90)
		printf("�Է��� ���� '%c'�� �빮�� �Դϴ�.", a);
	getch();
	return 0;
}