#include <stdio.h>

#define MAX 10 //MAX�� ����

int stack[MAX] = { 0, };
int top = -1;

bool PUSH(int value) {
	if (top >= MAX - 1) {//���� MAX���� -1���� ũ�ų� ������ OVERFLOW ���
		printf("STACK OVERFLOW\n");
		return 0; 
	}

	top++;//ž���� +1
	stack[top] = value;

	printf("PUSH[%d]\n", stack[top]);
	return 1; 
}

bool POP() {
	if (top == -1) {//���� TOP�� -1�̸� UNDERFLOW ���
		printf("STACK UNDERFLOW\n");
		return 0;
	}

	printf("POP[%d]\n", stack[top]);
	top--;//ž���� -1

	return 1;
}

int main() {
	int i;
	for (i = 0; i<11; i++)//10�� ���� 0~10
		PUSH(i + 1);//1���� ��� ex) 1,2,3...

	for (i = 0; i<11; i++)//10�� ���� 0~10
		POP();
	return 0;
}