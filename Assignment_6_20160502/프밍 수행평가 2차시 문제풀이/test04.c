#include<stdio.h>
#include<conio.h>
int main() {
	int number, day;
	int nu, da;
	while (1) {
		printf("차량번호 입력 : ");
		scanf("%d", &number);
		if (number < 1000 || number>10000) {
			printf("잘못입력하셨습니다.\n");
		}
		else {
			break;
		}
	}
	printf("오늘 날짜(일) 입력 : ");
	scanf("%d", &day);
	puts("---Output---");
	nu = (number % 100) % 10;
	da = day % 10;
	if (nu == da) {
		printf("%d 일 - %d 번 : 불가능", day, number);
	}
	else {
		printf("%d 일 - %d 번  : 가능", day, number);
	}
	getch();
	return 0;
}