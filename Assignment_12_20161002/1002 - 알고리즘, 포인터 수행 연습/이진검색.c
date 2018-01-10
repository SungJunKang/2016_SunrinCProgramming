#include <stdio.h>
int BinarySearch(int dataArr[], int size, int findData) {
	int low = 0, high = size - 1, mid;

	// high�� low���� �۾����ٸ� ã������ �����Ͱ� ������ ���տ� ����.
	while (low <= high)
	{
		// �߾Ӱ��� low�� high�� ���� ���� 2�� ������ �ȴ�.
		mid = (low + high) / 2;
		// ���� ã������ ���� �߾Ӱ����� �۴ٸ� high�� mid - 1�� �д�.
		if (dataArr[mid] > findData) high = mid - 1;
		// ���� ã������ ���� �߾Ӱ����� ũ�ٸ� low�� mid + 1�� �д�.
		else if (dataArr[mid] < findData) low = mid + 1;
		// �߾Ӱ��� ã������ ���� ��ġ�ϸ� mid�� ��ȯ�Ѵ�.
		else return mid;
	}
	// �����͸� ã�� ���ϸ� -1�� ��ȯ�Ѵ�.
	return -1;
}

int main() {
	int dataArr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 21, 24, 26, 27, 28 };
	int length = sizeof dataArr / sizeof dataArr[0];
	int input, ret;

	while (1) {
		scanf("%d", &input);
		ret = BinarySearch(dataArr, length, input);
		if (ret != -1) {
			printf("ã������ �����ʹ� %d��°�� �ֽ��ϴ�.\n", ret + 1);
		}
		else {
			printf("�����͸� ã�� �� �����ϴ�.\n");
		}
	}
	return 0;
}