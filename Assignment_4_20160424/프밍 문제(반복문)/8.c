#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int i;
	int sum = 0;
	printf("���� �Է� : ");
	scanf("%d", &input);
	puts("---��� ���---");
	for (i = 1; i<input; i++) {
		if (input%i == 0) {
			sum += i;
		}
	}
	if (sum == input)
		printf("%d�� �������Դϴ�.", input);
	else
		printf("%d�� �������� �ƴմϴ�", input);
	getch();
	return 0;
}