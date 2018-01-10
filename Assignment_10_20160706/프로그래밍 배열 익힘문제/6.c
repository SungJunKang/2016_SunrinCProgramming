#include<stdio.h>
int main() {
	int arr[100] = { 0, };
	int n; //숫자의 개수
	int min = 0;
	int i; //반복문 제어 변수
	int cnt; //최소값의 개수
	while (1) {
		printf("수열의 개수 n입력 (1≤n≤100) : ");
		scanf("%d", &n);
		if (n<1 || n>100) {
			printf("\n입력 오류.다시 입력해주세요\n");
		}
		else {
			break;
		}
	}
	printf("수열의 값 입력 : ");
	for (i = 0; i<n; i++) {
		scanf("%d", &arr[i]);
		min = arr[0];
		min = (min>arr[i]) ? arr[i] : min;
	}
	puts("---결과 출력---");
	printf("최소값 : %d\n", min);
	printf("최소값의 위치 : ");
	for(i = 0; i<n; i++) {
		if (arr[i] == min) {
			printf("%3d", i + 1);
		}
	}
	puts("");
	return 0;
}