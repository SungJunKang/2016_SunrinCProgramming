#include<stdio.h>
#include<conio.h>
int main() {
	int ax1, ay1, ax2, ay2;
	int bx1, by1, bx2, by2;
	printf("ù ��° ������� ��ǥ �Է�(ax1 ay1 ax2 ay2) : ");
	scanf("%d %d %d %d", &ax1, &ay1, &ax2, &ay2);
	printf("�� ��° ������� ��ǥ �Է�(bx1 by1 bx2 by2) : ");
	scanf("%d %d %d %d", &bx1, &by1, &bx2, &by2);
	puts("---��� ���---");
	if ((ax2 >= bx1 && ay2 >= by1) && (ax1 <= bx2 && ay1 <= by2))
		printf("�� �簢���� ��������.");
	else
		printf("�� �簢���� �������� �ʴ´�.");
	getch();
	return 0;
}