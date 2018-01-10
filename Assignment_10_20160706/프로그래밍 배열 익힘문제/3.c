#include<stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, tmp;
	puts("배열 이동 전 출력 : ");
	for (i = 0; i<10; i++) {
		printf("%3d", arr[i]);
	}
	puts("");
	puts("---결과 출력---");
	//배열을 왼쪽으로 한 칸 씩 이동하기
	for (i = 0; i<10; i++) {
		if (i == 0) {
			tmp = arr[i];
		}
		if (i == 9) {
			arr[i] = tmp;
		}
		else
			arr[i] = arr[i + 1];
	}
	puts("배열의 이동 후 출력 : ");
	for (i = 0; i<10; i++) {
		printf("%3d", arr[i]);
	}
	puts("");
	return 0;
}