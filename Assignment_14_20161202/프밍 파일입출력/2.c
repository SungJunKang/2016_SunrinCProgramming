#include<stdio.h>
int main() {
	FILE *in = fopen("input2.txt", "r");
	FILE *out = fopen("output2.txt", "w");
	int startNum, endNum;
	int sum = 0;
	int i;

	fscanf(in, "%d %d", &startNum, &endNum);
	for (i = startNum; i <= endNum; i++) {
		sum += i;
	}
	fprintf(out, "%d", sum);
	fprintf(stdout, "%d\n", sum);

	fclose(in);
	fclose(out);

	return 0;
}