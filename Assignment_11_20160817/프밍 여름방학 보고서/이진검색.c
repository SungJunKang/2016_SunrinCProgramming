#include <stdio.h>
int binary_serch(int list[], int n, int key);
int main(void)
{
	int key;
	int grade[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d", &key);
	printf("Ž����� = %d\n", binary_serch(grade, 10, key));
	return 0;
}
int binary_serch(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high)    // ���� ���ڵ��� ����������
	{
		middle = (low + high) / 2;  // �߰� ��� ����
		if (key == list[middle])   // ��ġ�ϸ� Ž�� ����
		{
			return middle;
		}
		else if (key > list[middle])  // �߰����Һ��� ũ��
		{
			low = middle + 1;  // ���ο� ������ low ����
		}
		else
		{
			high = middle - 1;  // ���ο� ������ high����
		}
	}
	return -1;
}