#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int sum = 0;
	int cnt = 0;
	while (1) {
		printf("���� �Է� : ");
		scanf("%d", &input);
		if (input == 999) {
			break;
		}
		sum += input;
		cnt++;
	}
	puts("---��� ���---");
	printf("�� : %d\n", sum);
	printf("��� : %.2f", (double)sum / cnt);
	getch();
	return 0;
}