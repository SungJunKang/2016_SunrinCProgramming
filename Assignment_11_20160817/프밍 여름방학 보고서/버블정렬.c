#include<stdio.h>
int main() {
	/*버블 정렬 방법
	1. 앞의 수, 바로 뒤의 수를 비교한다.
	2. 앞의 수가 클 경우 값을 교환한다.
	*/
	int arr[6] = {5,1,9,7,2,3};
	int i, j, tmp;

	//버블 정렬 전 배열값을 출력한다.
	puts("버블 정렬 전 배열값 출력");
	for (i = 0; i < 6; i++) {
		printf("%3d", arr[i]);
	}
	puts("");

	//버블 정렬을 한다.
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[j] > arr[j + 1]) { 
				tmp = arr[j];        
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	//버블 정렬 후 배열값을 출력한다.
	puts("버블 정렬 후 배열값 출력");
	for (i = 0; i < 6; i++) {
		printf("%3d", arr[i]);
	}
	puts("");
	return 0;
}