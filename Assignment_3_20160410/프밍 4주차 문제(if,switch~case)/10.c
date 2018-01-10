#include<stdio.h>
#include<conio.h>
int main() {
	int ax1, ay1, ax2, ay2;
	int bx1, by1, bx2, by2;
	printf("첫 번째 사격형의 좌표 입력(ax1 ay1 ax2 ay2) : ");
	scanf("%d %d %d %d", &ax1, &ay1, &ax2, &ay2);
	printf("두 번째 사격형의 좌표 입력(bx1 by1 bx2 by2) : ");
	scanf("%d %d %d %d", &bx1, &by1, &bx2, &by2);
	puts("---결과 출력---");
	if ((ax2 >= bx1 && ay2 >= by1) && (ax1 <= bx2 && ay1 <= by2))
		printf("두 사각형은 겹쳐진다.");
	else
		printf("두 사각형은 겹쳐지지 않는다.");
	getch();
	return 0;
}