#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	int i, j, cnt = 0;
	char ch[100];
	int a[300] = { 0, };

	printf("문자열 입력: ");
	fgets(ch, sizeof(ch), stdin);
	for (i = 0; i<strlen(ch); i++)
	{
		if (ch[i] != ' ')
		{
			a[ch[i]]++;
		}
	}
	puts("---결과 출력---");
	for (i = 1; i<300; i++)
	{
		if (a[i] != NULL && i != 10)
		{
			printf("%c---%d\n", i, a[i]);
		}
	}
	getch();
	return 0;
}