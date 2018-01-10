#include<stdio.h>
int main() {
	FILE *in = fopen("E:\\강성준\\비쥬얼 스튜디오\\프밍 파일입출력\\프밍 파일입출력\\temp\\input3.txt", "r");
	FILE *out = fopen("output3.txt","w");



	fclose(in);
	fclose(out);
	return 0;
}