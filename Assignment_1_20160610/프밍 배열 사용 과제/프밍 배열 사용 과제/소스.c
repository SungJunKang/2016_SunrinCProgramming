#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main() {
	int gu1[1000], gu2[1000];//배열 선언
	int anw, cnt = 0; //게임 사용자의 답과 맞춘 개수 카운트변수;
	int rnd1, rnd2; //배열에 들어갈 랜덤 변수
	int i; //반복문 제어 변수
	int input1, input2; //난이도와 게임 횟수 지정 변수

	srand((unsigned)time(NULL));
	puts("남녀노소 누구나 할 수 있는 구구단을 외자!!");
	printf("※주의사항※\n절대 계산기를 사용하지 마시오\n9와 19가 아닌 다른 숫자를 입력하였을 경우 프로그램이 종료됩니다.\n"); //주의사항 공지
	printf("\n난이도 선택!\n9단 or 19단 중에 선택하세요!(9 or 19 입력)\n");
	scanf("%d", &input2);//난이도 : 9단 or 19단 중 선택
	if (input2 == 9) { //9단을 선택했을때
		printf("게임을 몇 번 하시겠습니까?\n"); //게임 횟수 받기
		scanf("%d", &input1);
		printf("\n%d번 구구단 게임을 합니다!\n\n", input1);
		for (i = 1; i <= input1; i++) {
			rnd1 = rand() % 9 + 1; //1~9까지 랜덤 변수
			rnd2 = rand() % 9 + 1; //1~9까지 랜덤 변수
			gu1[i] = rnd1; //1~9까지 랜덤 변수 배열에 집어넣기
			gu2[i] = rnd2;//1~9까지 랜덤 변수 배열에 집어넣기
			printf("%d번째 문제!!\n\n", i);  //몇번째 문제인지 출력
			printf("%d * %d = ??\n", gu1[i], gu2[i]); //구구단 출력
			printf("답을 입력하세요! : ");
			scanf("%d", &anw); //구구단 답 입력
			if (gu1[i] * gu2[i] == anw) {
				printf("정답입니다!\n\n"); //구구단 답 맞으면 출력,cnt증가
				cnt++;
			}
			else {
				printf("틀렸습니다..ㅠㅠ\n\n"); //구구단 답 틀리면 출력
			}
		}
	}
	else if (input2 == 19) {
		printf("게임을 몇 번 하시겠습니까?\n");
		scanf("%d", &input1); //게임 횟수 받기
		printf("\n%d번 구구단 게임을 합니다!\n\n", input1);
		for (i = 1; i <= input1; i++) {
			rnd1 = rand() % 19 + 1; //1~19까지 랜덤 변수
			rnd2 = rand() % 19 + 1;//1~19까지 랜덤 변수
			gu1[i] = rnd1; //1~19까지 랜덤 변수 배열에 집어넣기
			gu2[i] = rnd2; //1~19까지 랜덤 변수 배열에 집어넣기
			printf("%d번째 문제!!\n\n", i); //몇번째 문제인지 출력
			printf("%d * %d = ??\n", gu1[i], gu2[i]); //구구단 출력
			printf("답을 입력하세요! : ");
			scanf("%d", &anw); //구구단 답 입력
			if (gu1[i] * gu2[i] == anw) { //구구단 답 맞으면 출력,cnt증가
				printf("정답입니다!\n\n");
				cnt++;
			}
			else {
				printf("틀렸습니다..ㅠㅠ\n\n"); //구구단 답 틀리면 출력
			}
		}
	}
	else {
		printf("잘못 입력하셨습니다. 프로그램을 종료합니다.\n"); //9 or 19를 입력하지 않았을 경우 프로그램 종료
		return 0;
	}
	printf("문제의 정답!!\n");
	for (i = 1; i <= input1; i++) { //푼 문제의 정답 출력
		printf("%d번 문제 : %d * %d = %d\n",i, gu1[i], gu2[i],(gu1[i]*gu2[i]));
	}
	printf("\n총 게임 횟수 : %d\n맞춘 횟수 : %d\n",input1, cnt); //총 게임 횟수와 맞춘 개수 출력
	printf("\n게임을 종료합니다.Bye..Bye..\n");
	getch();
	return 0;
}