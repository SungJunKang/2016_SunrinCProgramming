#include<stdio.h>
int main() {
	char str[100], ch;
	int i;
	int a = 0;

	printf("���ڿ� �Է� : "); //���ڿ� �Է�
	fgets(str, sizeof(str), stdin); //���ڿ� �Է¹ޱ�
	printf("ã������ ���� �Է� : "); //ã������ ���� �Է�
	scanf("%c", &ch); //ã������ ���� �Է� �ޱ�
	printf("'%c'�� ��ġ : ", ch);
	for (i = 0; str[i] != '\0'; i++) { 
		if (str[i] == ch) { //ã������ ���ڿ� ���ڿ��� ���� ��ġ�Ѵٸ�
			a = i + 1; 
			printf("%3d", a); //ã������ ������ ���� index�� ���
		}
	}
	puts("");

	return 0;
}