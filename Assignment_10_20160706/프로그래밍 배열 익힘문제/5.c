#include<stdio.h>
int main() {
	int arr[5][5] = { 0, };
	int i, j; //반복문 제어 변수
	int n = 0; //배열에 저장되는 값
			   //배열에 값 저장하기
	for (i = 0; i<4; i++) {
		for (j = 0; j<4; j++) {
			arr[i][j] = ++n;
		}
	}
	//각 행의 끝과 각 열의 끝에 더한 값 저장하기
	for (i = 0; i<4; i++) {
		for (j = 0; j<4; j++) {
			arr[i][4] += arr[i][j];
			arr[4][j] += arr[i][j];
			arr[4][4] += arr[i][j];
		}
	}
	puts("배열의 출력 : ");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}