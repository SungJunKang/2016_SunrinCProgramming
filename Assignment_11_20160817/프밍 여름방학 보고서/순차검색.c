#include <stdio.h>
int seq_serch(int list[], int n, int key);
int main(void)
{
	int key;
	int grade[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);
	printf("탐색결과 = %d\n", seq_serch(grade, 10, key));
	return 0;
}
int seq_serch(int list[], int n, int key)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (list[i] == key)
		{
			return i;  // 탐색이 성공하면 인덱스 반환
		}
	}
	return -1;    // 탐색이 실패하면 -1 반환
}
