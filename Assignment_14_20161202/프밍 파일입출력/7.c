#include<stdio.h>
int main() {
	FILE *in = fopen("input7.txt", "r");
	FILE *out = fopen("output7.txt", "w");
	int n;
	int i;
	char name[20];
	int age;
	char memo[200];

	fscanf(in, "%d\n", &n);
	for (i = 0; i < n; i++) {
		fscanf(in, "%s %d\n", name, &age);
		fgets(memo, 200, in);
		fprintf(out, "�̸� : %s\n���� : %d\nƯ�̻��� : %s", name, age, memo);
		fprintf(stdout, "�̸� : %s\n���� : %d\nƯ�̻��� : %s", name, age, memo);
	}
	puts("");

	fclose(in);
	fclose(out);
	return 0;
}