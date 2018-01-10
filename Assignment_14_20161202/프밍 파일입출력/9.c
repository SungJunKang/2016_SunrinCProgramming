#include<stdio.h>
#include<string.h>
int main() {
	FILE *in = fopen("input9.txt", "r");
	FILE *out = fopen("output9.txt", "w");
	char src[100]; //읽어온 문장 저장
	char dst[50][30]; //단어별 저장
	int len = 0;
	int i;
	int row = 0, col = 0;

	fgets(src, 100, in);
	len = strlen(src);
	fprintf(stdout, "%d\n", len);
	fprintf(out, "%d\n", len);
	for (i = 0; i < len; i++) {
		if (src[i] == ' ' || src[i] == '.') {
			dst[row][col] = '\0';
			row++;
			col = 0;
		}
		else {
			dst[row][col] = src[i];
			col++;
		}
	}
	for (i = 0; i < row; i++) {
		fprintf(stdout, "%d", strlen(dst[i]));
		fprintf(stdout, "%s\n", dst[i]);
	}

	fclose(in);
	fclose(out);
	return 0;
}