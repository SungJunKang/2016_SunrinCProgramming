#include<stdio.h>
#include<conio.h>
int main() {
	int number, day;
	int nu, da;
	while (1) {
		printf("������ȣ �Է� : ");
		scanf("%d", &number);
		if (number < 1000 || number>10000) {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
		}
		else {
			break;
		}
	}
	printf("���� ��¥(��) �Է� : ");
	scanf("%d", &day);
	puts("---Output---");
	nu = (number % 100) % 10;
	da = day % 10;
	if (nu == da) {
		printf("%d �� - %d �� : �Ұ���", day, number);
	}
	else {
		printf("%d �� - %d ��  : ����", day, number);
	}
	getch();
	return 0;
}