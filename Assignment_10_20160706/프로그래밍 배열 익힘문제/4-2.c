#include<stdio.h>
int main() {
	int arr[5][5] = { 0, };
	int i, j; //반복문 제어 변수
	int n = 0;
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			n++;
			if (i % 2 == 0) {
				arr[i][j] = n;
			}
			else {
				arr[i][4 - j] = n;
			}
		}
	}
	puts("배열의 출력 : ");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}