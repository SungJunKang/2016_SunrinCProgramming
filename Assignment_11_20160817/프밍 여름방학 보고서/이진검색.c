#include <stdio.h>
int binary_serch(int list[], int n, int key);
int main(void)
{
	int key;
	int grade[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);
	printf("탐색결과 = %d\n", binary_serch(grade, 10, key));
	return 0;
}
int binary_serch(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high)    // 아직 숫자들이 남아있으면
	{
		middle = (low + high) / 2;  // 중간 요소 결정
		if (key == list[middle])   // 일치하면 탐색 성공
		{
			return middle;
		}
		else if (key > list[middle])  // 중간원소보다 크면
		{
			low = middle + 1;  // 새로운 값으로 low 설정
		}
		else
		{
			high = middle - 1;  // 새로운 값으로 high설정
		}
	}
	return -1;
}