#include<stdio.h>
#include<conio.h>
int main() {
	int width, height;
	int w, h;
	printf("가로 입력 : ");
	scanf("%d",&width);
	printf("세로 입력 : ");
	scanf("%d",&height);
	puts("---결과 출력---");
	for (h = 1; h <= height; h++) {
		for (w = 1; w <= width; w++){
			if ((w == 1 || w == width) && (h == 1 || h == height))
				printf("+");
			else if (h == 1 || h == height)
				printf("-");
			else if (w == 1 || w == width)
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
	return 0;
}