#include<stdio.h>
#include<conio.h>
int main() {
	int number, day, number_1, day_1;
	printf("차량번호입력 : ");
	scanf("%d", &number);
	printf("오늘 날짜(일) 입력 : ");
	scanf("%d", &day);
	number_1 = (((number % 1000) % 100) % 10);
	day_1 = (day % 10);
	puts("---결과 출력---");
	if (number_1 == day_1)
		printf("%d 번 차량은 오늘 운행이 불가능합니다.", number);
	else
		printf("%d 번 차량은 오늘 운행이 가능합니다.", number);
	getch();
	return 0;
}