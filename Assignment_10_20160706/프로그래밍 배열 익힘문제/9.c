#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	char arr[100];//������ �������� ���� : ���ڿ�
	int i;
	printf("���ڿ� �Է� : ");
	/*
	���ڿ� �Է� �ޱ�
	1. scanf�� %s : ������, ��, ���Ϳ� ���� ó��X
	2. gets() �Լ� �̿� : ������ ������ ���� �Է�
	*/
	//gets(arr);
	fgets(arr, sizeof(arr), stdin);
	//arr[strlen(arr)-1]='\0'
	i = 0;
	puts("---��� ���---");
	while (arr[i] != '\0') {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] = arr[i] - 32;
		}
		else if (isupper(arr[i])) {
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}