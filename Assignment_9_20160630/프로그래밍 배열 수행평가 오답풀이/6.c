#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main() {
	int arr[100];
	int i, j;
	int tmp;



	srand((unsigned int)time(NULL));
	for (i = 0; i<5; i++) {
		arr[i] = rand() % 999 + 1;
	}
	puts("1~999사이의 난수 출력 : ");
	for (i = 0; i<5;i++) {
		printf("%5d", arr[i]);
	}
	puts("");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			if (arr[i]<arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	puts("오름차순으로 정렬 후 출력 : ");
	for (i = 0; i<5;i++) {
		printf("%5d", arr[i]);
	}
	puts("");
	getch();
	return 0;
}
