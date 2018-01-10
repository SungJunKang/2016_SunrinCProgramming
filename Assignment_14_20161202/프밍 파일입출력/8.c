#include<stdio.h>
int main() {
	FILE *in = fopen("input8.txt", "r");
	FILE *out = fopen("output8.txt", "w");
	int n;
	char str[50][100]; //문자열 배열
	int i;

	fscanf(in, "%d\n", &n);
	for (i = 0; i < n; i++) {
		fgets(str[i], 100, in);
	}
	for (i = n - 1; i >= 0; i--) {
		fputs(str[i], out);
		fputs(str[i], stdout);
	}

	fclose(in);
	fclose(out);
	return 0;
}