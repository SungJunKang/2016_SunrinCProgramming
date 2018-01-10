#include<stdio.h>
int main() {
	char str[100];
	int i;

	printf("문자열을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);

	puts("문자열에서 숫자만 출력합니다.");
	for (i = 0; i < 100; i++) {
		if (str[i] >='1' && str[i] <= '9') {
			printf("%3c", str[i]);
		}
	}
	puts("");
	return 0;
}