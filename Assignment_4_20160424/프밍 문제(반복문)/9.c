#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int i;
	int cnt = 0;
	printf("���� �Է� : ");
	scanf("%d", &input);
	puts("---��� ���---");
	for (i = 0; i<input; i++) {
		if (i % 10 == 1) {
			printf("%-3d", i);
			cnt++;
		}
	}
	printf("\n(�� %d��)", cnt);
	getch();
	return 0;
}