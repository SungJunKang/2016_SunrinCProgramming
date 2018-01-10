#include<stdio.h>
#include<conio.h>
int main() {
	char ch[100];
	int i;
	int leng = 0;
	char temp;

	printf("문자열 입력 : ");
	fgets(ch, sizeof(ch), stdin);

	while (ch[leng] != '\0') {
		leng++;
	}
	for (int i = 0; i < leng / 2; i++) {
		temp = ch[i];
		ch[i] = ch[leng - i - 1];
		ch[leng - i - 1] = temp;
	}

	puts("---결과 출력---");
	printf("%s\n", ch);
	getch();
	return 0;
}