#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0, score[5] = { 0 }, average;

	for (int i = 0; i < 5; i++) {
		printf("학생들의 성적을 입력하시오. : "),
			scanf("%d", &score[i]); //연산자 우선순위 : [] -> &
		sum += score[i];
	}
	printf("성적 평균 : %d", average = sum / 5);
}