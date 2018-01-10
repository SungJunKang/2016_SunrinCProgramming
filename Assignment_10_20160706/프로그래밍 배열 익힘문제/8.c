#include <stdio.h>
#include <conio.h>
int main() {
	char arr[100];
	int i, j, cnt = 0, a;
	printf("문자열입력: ");
	fgets(arr, sizeof(arr), stdin);
	for (i = 0; ; i++)
	{
		if (arr[i] == '\0')
		{
			a = i - 1;
			break;
		}
	}
	for (i = 0, j = a - 1; i < a, j >= 0; i++, j--)
	{
		if (i >= j) break;
			if (arr[i] != arr[j])
			{
				cnt = 1;
				break;
			}
	}
	printf("---결과출력---\n\n");
	switch (cnt)
	{
	case 0: printf("앞뒤가 같은 문자열!\n"); break;
	case 1: printf("앞뒤가 다른 문자열!\n"); break;
	}

	getch();
	return 0;
}