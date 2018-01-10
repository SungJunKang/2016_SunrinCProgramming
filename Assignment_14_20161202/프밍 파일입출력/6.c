#include<stdio.h>
int main() {
	FILE *in = fopen("input6.txt", "r");
	FILE *out = fopen("output6.txt", "w");
	char str[100];

	while ((fscanf(in, "%s", str)) != EOF) {
		fprintf(stdout, "%s\n", str);
		fprintf(out, "%s\n", str);
	}

	fclose(out);
	fclose(in);
	return 0;
}