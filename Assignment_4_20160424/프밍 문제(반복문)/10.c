#include<stdio.h>
#include<conio.h>
int main() {
	int width, height;
	int w, h;
	printf("���� �Է� : ");
	scanf("%d",&width);
	printf("���� �Է� : ");
	scanf("%d",&height);
	puts("---��� ���---");
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