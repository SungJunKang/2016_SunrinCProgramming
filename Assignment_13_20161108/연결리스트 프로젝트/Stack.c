#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct nodeStack{
	char data;
	struct nodeStack *next;
}nodeStack;

typedef nodeStack *ndSta;

typedef struct stack{
	int count;
	ndSta head;
	ndSta tail;
}stack;

stack *createStack() {
	stack *newStack = (stack*)malloc(sizeof(stack));
	newStack->count = 0;
	newStack->head = NULL;
	newStack->tail = NULL;

	return newStack;
}

int isEmpty(stack *sta) {
	if (sta->count == 0) {
		printf("스택이 비어있습니다.\n");
		return -1;
	}
	else if (sta->count > 0) {
		printf("스택이 비어있지않습니다.\n");
	}
}

int isFull(stack *sta) {
	if (sta->count >= 5) {
		printf("스택이 꽉찼습니다.\n");
		return -1;
	}
	else {
		printf("스택이 꽉차지 않았습니다.\n");
	}
}

int returnisEmpty(stack *sta) {
	if (sta->count == 0) {
		return -1;
	}
	else if (sta->count > 0) {
		return 0;
	}
}

void Push(char a, stack *sta) {
	nodeStack *p;
	p = (nodeStack*)malloc(sizeof(nodeStack));
	p->data = a;
	p->next = sta->head;
	sta->head = p;
	sta->count++;
	printf("Push : %d\n", p->data);
}

int Pop(stack *sta) {
	if (returnisEmpty(sta) == -1) {
		return 0;
	}
	nodeStack *p = sta->head;
	printf("Pop : %d\n", p->data);
	sta->head = p->next;
	free(p);
	sta->count--;
}

int Peek(stack *sta) {
	if (returnisEmpty(sta) == -1) {
		return 0;
	}
	printf("Peek : %d\n", sta->head->data);
}

void searchStack(stack *sta, int a) {
	nodeStack *p = sta->head;
	for (int i = 0; i < sta->count; i++) {
		if (p->data == a) {
			printf("%d는 스택에 있습니다.\n", a);
			break;
		}
		if (i == sta->count - 1) {
			printf("%d는 스택에 없습니다.\n", a);
		}
		p = p->next;
	}
}
int main() {
	stack* stac = (stack*)malloc(sizeof(stack));
	createStack();
	isEmpty(stac);
	Push(1, stac);
	Push(2, stac);
	Push(3, stac);
	Push(7, stac);
	Push(9, stac);
	Push(10, stac);
	Push(15, stac);
	Push(61, stac);
	Push(50, stac);
	Push(30, stac);
	Push(91, stac);
	Push(20, stac);
	Push(93, stac);
	isEmpty(stac);
	Peek(stac);
	Pop(stac);
	isEmpty(stac);
	Peek(stac);
	Pop(stac);
	Peek(stac);
	isFull(stac);
	searchStack(stac, 15);
	getch();
}