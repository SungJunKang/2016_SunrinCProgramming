#include <stdio.h>
int main(){
	/*
	���� ���� ���
	1. �־��� ����Ʈ �߿��� �ּڰ��� ã�´�.
	2. �� ���� �� �տ� ������ ���� ��ü�Ѵ�.
	3. �� ó�� ��ġ�� �A ������ ����Ʈ�� ���� ������� ��ü�Ѵ�.
	*/
	int arr[6] = {5,1,3,7,2,9};
	int i, j, index, temp;

	//���� ���� �� �迭���� ����Ѵ�.
	puts("���� ���� �� �迭 �� ���");
	for (i = 0; i < 6; i++) {
		printf("%3d", arr[i]);
	}
	puts("");

	//���� ������ �Ѵ�.
	for (i = 0; i < 6 - 1; i++){
		index = i;
		for (j = i + 1; j < 6; j++){
			if (arr[index] > arr[j]){
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}

	//���� ���� �� �迭���� ����Ѵ�.
	puts("���� ���� �� �迭 �� ���");
	for (i = 0; i < 6; i++) {
		printf("%3d ", arr[i]);
	}
	puts("");

	return 0;
}