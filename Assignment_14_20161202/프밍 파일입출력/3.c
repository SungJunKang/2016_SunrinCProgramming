#include<stdio.h>
int main() {
	FILE *in = fopen("E:\\������\\����� ��Ʃ���\\���� ���������\\���� ���������\\temp\\input3.txt", "r");
	FILE *out = fopen("output3.txt","w");



	fclose(in);
	fclose(out);
	return 0;
}