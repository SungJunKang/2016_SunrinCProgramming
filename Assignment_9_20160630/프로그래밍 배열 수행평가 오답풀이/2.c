#include <stdio.h>
#include <conio.h>
int main(){
	int i, n, n2;
	int pibonachi[10] = { 0, };

	pibonachi[0] = 0;
	pibonachi[1] = 1;

	printf("출력을 시작할 배열의 인덱스 입력: ");
	scanf("%d", &n);
	printf("출력 개수 : ");
	scanf("%d", &n2);

	for (i = 2; i<10; i++)
	{
		pibonachi[i] = pibonachi[i - 1] + pibonachi[i - 2];
	}
	printf("--결과출력--\n\n");
	for (i = n; i<n + n2; i++)
	{
		printf("%d ", pibonachi[i]);
	}

	printf("\n");
	getch();
	return 0;
}