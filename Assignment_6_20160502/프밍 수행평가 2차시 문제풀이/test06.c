#include<stdio.h>
#include<conio.h>
int main() {
	int n, i;
	double a, max = 0;
	printf("�Էµ� ���� ���� : ");
	scanf("%d", &n);
	printf("%d���� �Ǽ��� �Է�\n",n);
	for (i = 1; i <= n; i++) {
		printf("���� %d: ", i);
		scanf("%lf", &a);
		if (a > max) {
			max = a;
		}
	}
	puts("---Output---");
	printf("�ִ밪 : %.2f\n", max);
	getch();
	return 0;
}