// 구조체 배열

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3

#include <stdio.h>

struct Student_info
{
	int number;
	char name[10];
	double grade;
};


int main(void)
{
	struct Student_info list[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("학번을 입력하시오. : "), scanf("%d", &list[i].number);
		printf("이름을 입력하시오. : "), scanf("%s", &list[i].name);
		printf("학점을 입력하시오. : "), scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < SIZE; i++) {
		printf("학번 : %d, 이름 : %s, 학점 : %lf.1\n", list[i].number, list[i].name, list[i].grade);
	}
	return 0;
}