#include<stdio.h>
int main() {
	int arr[10] = { 45,36,52,86,12,42,73,51,36,53 };
	int i;
	int max, min;
	puts("�迭�� ���� ��� : ");
	for (i = 0; i<10; i++) {
		printf("%3d", arr[i]);
	}
	max = arr[0];
	for (i = 0; i<10; i++) {
		if (max<arr[i]) {
			max = arr[i];
		}
	}
	min = arr[0];
	for (i = 0; i<10; i++) {
		if (min>arr[i]) {
			min = arr[i];
		}
	}
	printf("\n");
	puts("---��� ���---");
	printf("�ִ밪 : %d\t�ּڰ� : %d\n", max, min);
	return 0;
}