#include <stdio.h>

#define MAX 10 //MAX값 설정

int stack[MAX] = { 0, };
int top = -1;

bool PUSH(int value) {
	if (top >= MAX - 1) {//만약 MAX값의 -1보다 크거나 같으면 OVERFLOW 출력
		printf("STACK OVERFLOW\n");
		return 0; 
	}

	top++;//탑증가 +1
	stack[top] = value;

	printf("PUSH[%d]\n", stack[top]);
	return 1; 
}

bool POP() {
	if (top == -1) {//만약 TOP이 -1이면 UNDERFLOW 출력
		printf("STACK UNDERFLOW\n");
		return 0;
	}

	printf("POP[%d]\n", stack[top]);
	top--;//탑감소 -1

	return 1;
}

int main() {
	int i;
	for (i = 0; i<11; i++)//10번 수행 0~10
		PUSH(i + 1);//1부터 출력 ex) 1,2,3...

	for (i = 0; i<11; i++)//10번 수행 0~10
		POP();
	return 0;
}