#include<stdio.h>
#include<conio.h>
int main() {
	int input, i, sum = 0;
	printf("����(���) �Է� : ");
	scanf("%d",&input);
	puts("---��� ���---");
	for (i = 1; i <= input;i*=10) {
		sum += ((input % (10 * i)) - (input%i)) / i;
	}
	printf(">>�� �ڸ����� ���� : %d",sum);
	getch();
	return 0;
}