#include<stdio.h>
int main() {
	int arr[5][5] = { 0, };
	int i, j; //�ݺ��� ���� ����
	int n = 0; //�迭�� ����Ǵ� ��
			   //�迭�� �� �����ϱ�
	for (i = 0; i<4; i++) {
		for (j = 0; j<4; j++) {
			arr[i][j] = ++n;
		}
	}
	//�� ���� ���� �� ���� ���� ���� �� �����ϱ�
	for (i = 0; i<4; i++) {
		for (j = 0; j<4; j++) {
			arr[i][4] += arr[i][j];
			arr[4][j] += arr[i][j];
			arr[4][4] += arr[i][j];
		}
	}
	puts("�迭�� ��� : ");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}