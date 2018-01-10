#include<stdio.h>
int main() {
	FILE *in = fopen("input1.txt", "r");
	FILE *out = fopen("output1.txt", "w");
	char name[20];
	int kor, eng;

	fscanf(in, "%s %d %d", name, &kor, &eng);
	printf("%s %d %.2lf\n", name, (kor + eng), (kor + eng) / 2.0);
	fprintf(out, "%s %d %.2lf\n", name, (kor + eng), (kor + eng) / 2.0);

	fclose(in);
	fclose(out);

	return 0;
}