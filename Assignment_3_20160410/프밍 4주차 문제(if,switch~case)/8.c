#include<stdio.h>
#include<conio.h>
int main() {
	int number, day, number_1, day_1;
	printf("������ȣ�Է� : ");
	scanf("%d", &number);
	printf("���� ��¥(��) �Է� : ");
	scanf("%d", &day);
	number_1 = (((number % 1000) % 100) % 10);
	day_1 = (day % 10);
	puts("---��� ���---");
	if (number_1 == day_1)
		printf("%d �� ������ ���� ������ �Ұ����մϴ�.", number);
	else
		printf("%d �� ������ ���� ������ �����մϴ�.", number);
	getch();
	return 0;
}