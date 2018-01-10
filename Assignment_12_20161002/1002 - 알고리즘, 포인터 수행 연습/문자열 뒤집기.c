#include <stdio.h>
char contrast_str(char *arr, char *arr1);
int main() {
	char arr[100];
	char arr1[100];
	int i;

	printf("문자열을 입력하세요 : ");
	fgets(arr, sizeof(arr), stdin);

	printf("문자열을 거꾸로 출력합니다.");
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
