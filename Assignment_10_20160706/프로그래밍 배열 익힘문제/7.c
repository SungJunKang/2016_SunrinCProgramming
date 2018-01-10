#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int arr[31] = { 0, };
	int n;
	int i, j;
	int beFound = 0;//이미 있는 값인지 확인을 위한 변수
	puts("자리 배치 프로그램");
	printf("학급의 인원 입력 : ");
	scanf("%d", &n);
	srand((unsigned int)time(NULL));
	for (i = 1; i <= n; i++) {
		while (1) {
			arr[i] = rand() % (n - 1) + 1;
			beFound = 0;
			//같은 값이 있는지 확인
			for (j = 2; j<i; j++) {
				if (arr[i] == arr[j]) {
					beFound = 1;
					break;
				}
			}
			//같은 값이 없으면
			if (!beFound) {
				break;
			}
		}
	}
	puts("자리 배치 발표!");
	for (i = 1; i <= n; i++) {
		printf("%02d:%02d\t", i, arr[i]);
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}