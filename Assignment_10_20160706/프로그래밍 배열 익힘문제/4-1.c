#include<stdio.h>
int main() {
	int arr[5][5] = { 0 };
	int i, j;
	int n = 0; //1���� �����Ǵ� ���� �迭�� �ֱ� ���� ����
	for (i = 0; i<5; i++) {
		for (j = i; j<5; j++) {
			n++;
			arr[j][i] = n;
		}
	}
	puts("ù��° �迭 ��� : ");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			if (arr[i][j] != 0) {
				printf("%3d", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}