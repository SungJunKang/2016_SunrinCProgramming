#include <stdio.h>
int main(){
	/*
	선택 정렬 방법
	1. 주어진 리스트 중에서 최솟값을 찾는다.
	2. 그 값을 맨 앞에 위차한 값과 교체한다.
	3. 맨 처음 위치를 뺸 나머지 리스트를 같은 방법으로 교체한다.
	*/
	int arr[6] = {5,1,3,7,2,9};
	int i, j, index, temp;

	//선택 정렬 전 배열값을 출력한다.
	puts("선택 정렬 전 배열 값 출력");
	for (i = 0; i < 6; i++) {
		printf("%3d", arr[i]);
	}
	puts("");

	//선택 정렬을 한다.
	for (i = 0; i < 6 - 1; i++){
		index = i;
		for (j = i + 1; j < 6; j++){
			if (arr[index] > arr[j]){
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}

	//선택 정렬 후 배열값을 출력한다.
	puts("선택 정렬 후 배열 값 출력");
	for (i = 0; i < 6; i++) {
		printf("%3d ", arr[i]);
	}
	puts("");

	return 0;
}