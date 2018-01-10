#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	char arr[100];//문자형 데이터의 묶음 : 문자열
	int i;
	printf("문자열 입력 : ");
	/*
	문자열 입력 받기
	1. scanf의 %s : 스페이, 탭, 엔터에 대한 처리X
	2. gets() 함수 이용 : 공백을 포함한 문자 입력
	*/
	//gets(arr);
	fgets(arr, sizeof(arr), stdin);
	//arr[strlen(arr)-1]='\0'
	i = 0;
	puts("---결과 출력---");
	while (arr[i] != '\0') {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] = arr[i] - 32;
		}
		else if (isupper(arr[i])) {
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}