#include<stdio.h>
#include<conio.h>
int main() {
	int n, i;
	double input = 0;
	double max = 0;
	printf("�Էµ� ���� ���� : ");
	scanf("%d", &n);
	printf("%d���� �Ǽ� �Է� : ", n);
	for (i = 0; i<n; i++) {
		scanf("%lf", &input);
		if (max<input) {
			max = input;
		}
	}
	puts("---��� ���---");
	printf("�ִ밪 : %.2f", max);
	getch();
	return 0;
}