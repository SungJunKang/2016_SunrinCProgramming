#include <stdio.h>
int seq_serch(int list[], int n, int key);
int main(void)
{
	int key;
	int grade[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d", &key);
	printf("Ž����� = %d\n", seq_serch(grade, 10, key));
	return 0;
}
int seq_serch(int list[], int n, int key)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (list[i] == key)
		{
			return i;  // Ž���� �����ϸ� �ε��� ��ȯ
		}
	}
	return -1;    // Ž���� �����ϸ� -1 ��ȯ
}
