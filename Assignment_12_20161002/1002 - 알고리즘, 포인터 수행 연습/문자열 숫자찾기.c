#include<stdio.h>
int main() {
	char str[100];
	int i;

	printf("���ڿ��� �Է��ϼ��� : ");
	fgets(str, sizeof(str), stdin);

	puts("���ڿ����� ���ڸ� ����մϴ�.");
	for (i = 0; i < 100; i++) {
		if (str[i] >='1' && str[i] <= '9') {
			printf("%3c", str[i]);
		}
	}
	puts("");
	return 0;
}