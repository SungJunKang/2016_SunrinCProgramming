#include <stdio.h>
char contrast_str(char *arr, char *arr1);
int main() {
	char arr[100];
	char arr1[100];
	int i;

	printf("���ڿ��� �Է��ϼ��� : ");
	fgets(arr, sizeof(arr), stdin);

	printf("���ڿ��� �Ųٷ� ����մϴ�.");
	contrast_str(arr, arr1);
	printf("%s\n", arr1);
	return 0;
}
char contrast_str(char *arr, char *arr1) {
	int i, j;
	for (j = 0; j<100; j++) {
		if (arr[j] == '\0') {
			i = j;
		}
	}
	for (j = 0; j<i; j++) {
		arr1[j] = arr[i - 1 - j];
	}
	arr1[i] = '\0';
	return 0;
}
