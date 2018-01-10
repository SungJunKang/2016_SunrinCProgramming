#include<stdio.h>
int main() {
	char str[100], ch;
	int i;
	int a = 0;

	printf("문자열 입력 : "); //문자열 입력
	fgets(str, sizeof(str), stdin); //문자열 입력받기
	printf("찾으려는 문자 입력 : "); //찾으려는 문자 입력
	scanf("%c", &ch); //찾으려는 문자 입력 받기
	printf("'%c'의 위치 : ", ch);
	for (i = 0; str[i] != '\0'; i++) { 
		if (str[i] == ch) { //찾으려는 문자와 문자열의 값과 일치한다면
			a = i + 1; 
			printf("%3d", a); //찾으려는 문자의 문자 index값 출력
		}
	}
	puts("");

	return 0;
}