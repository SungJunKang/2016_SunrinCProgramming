#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int arr[100];
	int i, j;
	int tmp;

	srand((unsigned int)time(NULL));
	for (i = 0; i<100; i++) {
		arr[i] = rand() % 999 + 1;
	}
	puts("1~999사이의 난수 출력 : ");
	for (i = 0; i<100;) {
		for (j = 0; j<10; j++, i++) {
			printf("%5d", arr[i]);
		}
		printf("\n");
	}
	puts("");
	for (i = 0; i<100; i++) {
		for (j = 0; j<100; j++) {
			if (arr[i]<arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	puts("오름차순 정렬 : ");
	for (i = 0; i<100;) {
		for (j = 0; j<10; j++, i++) {
			printf("%5d", arr[i]);
		}
		printf("\n");
	}
	return 0;
}