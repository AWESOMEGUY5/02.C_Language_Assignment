#define _CRT_SECURE_NO_WARNINGS
#define STUDENT 5

#include <stdio.h>

int main(void)
{
	int score[STUDENT];
	int sum = 0;
	
	for (int i = 0; i < STUDENT; i++) {
		printf("학생들의 성적을 입력하시오. : "), scanf("%d", &score[i]);
	}
	for (int i = 0; i < STUDENT; i++) {
		sum += score[i];
	}
	printf("평균 : %d", sum / STUDENT);
	return 0;
}