#include <stdio.h>
#include <conio.h>
int main(){
	int i, n, n2;
	int pibonachi[10] = { 0, };

	pibonachi[0] = 0;
	pibonachi[1] = 1;

	printf("����� ������ �迭�� �ε��� �Է�: ");
	scanf("%d", &n);
	printf("��� ���� : ");
	scanf("%d", &n2);

	for (i = 2; i<10; i++)
	{
		pibonachi[i] = pibonachi[i - 1] + pibonachi[i - 2];
	}
	printf("--������--\n\n");
	for (i = n; i<n + n2; i++)
	{
		printf("%d ", pibonachi[i]);
	}

	printf("\n");
	getch();
	return 0;
}