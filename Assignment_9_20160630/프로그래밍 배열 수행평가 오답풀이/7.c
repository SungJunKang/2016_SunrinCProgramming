#include <stdio.h>
#include <conio.h>
int main(){
	int i, n, j;
	int arr[6][6] = { 0, };

	printf("배열의 첫 번째 값 입력: ");
	scanf("%d", &n);
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			arr[i][j] = n;
			n++;
			arr[i][5] += arr[i][j];
			arr[5][j] += arr[i][j];
			arr[5][5] += arr[i][j];
		}
	}
	printf("--결과출력--\n\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	getch();
	return 0;
}