#include<stdio.h>
struct ACCOUNT {
	char accountNum[20]; //계좌번호
	char name[20]; //이름
	int deposit; //저축액
	int withdraw; //출금액
	int balance; //잔액
};
typedef struct ACCOUNT account;
int main() {
	FILE *in = fopen("bank.txt", "r");
	FILE *out = fopen("result.txt", "w");
	account list[50];
	int i = 0;

	while ((fscanf(in, "%s %s %d %d", list[i].accountNum, list[i].name, &list[i].deposit, &list[i].withdraw)) != EOF) {
		list[i].balance = list[i].deposit - list[i].withdraw;
		fprintf(out, "%s %s %d\n", list[i].accountNum, list[i].name, list[i].balance);
		fprintf(stdout, "%s %s %d\n", list[i].accountNum, list[i].name, list[i].balance);
		i++;
	}

	fclose(in);
	fclose(out);
	return 0;
}