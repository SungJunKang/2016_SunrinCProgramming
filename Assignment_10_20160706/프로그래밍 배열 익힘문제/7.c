#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int arr[31] = { 0, };
	int n;
	int i, j;
	int beFound = 0;//�̹� �ִ� ������ Ȯ���� ���� ����
	puts("�ڸ� ��ġ ���α׷�");
	printf("�б��� �ο� �Է� : ");
	scanf("%d", &n);
	srand((unsigned int)time(NULL));
	for (i = 1; i <= n; i++) {
		while (1) {
			arr[i] = rand() % (n - 1) + 1;
			beFound = 0;
			//���� ���� �ִ��� Ȯ��
			for (j = 2; j<i; j++) {
				if (arr[i] == arr[j]) {
					beFound = 1;
					break;
				}
			}
			//���� ���� ������
			if (!beFound) {
				break;
			}
		}
	}
	puts("�ڸ� ��ġ ��ǥ!");
	for (i = 1; i <= n; i++) {
		printf("%02d:%02d\t", i, arr[i]);
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}