#include<stdio.h>
void main() {
	int i;
	char ch;
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') {
		for (i = 1; i <= 3; i++) {
			ch = ch - 1;
			if (ch < 'a') ch += 26;
			printf("%c",ch);
		}
	}
	else {
		printf("입력 오류");
	}
}