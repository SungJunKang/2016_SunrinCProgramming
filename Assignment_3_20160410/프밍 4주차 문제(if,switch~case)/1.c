#include<stdio.h>
#include<conio.h>
int main() {
	char a;
	printf("���� ������ �Է� : ");
	scanf("%c", &a);
	puts("---��� ���---");
	if (a >= 65 && a <= 90)
		printf("�ҹ��ڷ� ��ȯ : %c", a + 32);
	else if (a >= 97 && a <= 122)
		printf("�빮�ڷ� ��ȯ : %c", a - 32);
	getch();
	return 0;
}