#include<stdio.h>
int q[10] = { 0 }, abc = 0;
void inQueue(int in) {
	q[abc] = in;
	abc++;
}
void deQueue() {
	for (int i = 0; i < abc - 1; i++) {
		q[i] = q[i + 1];
	}
	abc--;
}
void end() {
	for (int i = 0; i < abc; i++) {
		printf("%1d", q[i]);
	}
	printf("\n");
}
int main() {
	int input, b;
	printf("Queue �����մϴ�.");

	while (1) {
		printf("������ �����Ұ��Դϱ�?\n");
		printf("1�� : �߰�\n2�� : ����\n3�� : ����\n");
		scanf("%d", &input);
		if (input == 1) {
			scanf("%d", &b);
			inQueue(b);
		}
		else if (input == 2) {
			deQueue();
		}
		else if (input == 3) {
			end();
			break;
		}
	}
}