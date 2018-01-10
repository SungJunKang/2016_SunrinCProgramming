#include<stdio.h>
#include<conio.h>
int main() {
	int input, i, sum = 0;
	printf("정수(양수) 입력 : ");
	scanf("%d",&input);
	puts("---결과 출력---");
	for (i = 1; i <= input;i*=10) {
		sum += ((input % (10 * i)) - (input%i)) / i;
	}
	printf(">>각 자리수의 총합 : %d",sum);
	getch();
	return 0;
}