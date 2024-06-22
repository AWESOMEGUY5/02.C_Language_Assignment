#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[3];
	for (int i = 0; i < 3; i++) {
		printf("학번을 입력하시오. : "), scanf("%d", &list[i].number);
		printf("이름을 입력하시오. : "), scanf("%s", list[i].name);
		printf("학점을 입력하시오. : "), scanf("%lf", &list[i].grade);
	}
	printf("==============================\n");
	for (int i = 0; i < 3; i++) {
		printf("학번 : %d \n이름 : %s \n학점 : %g\n",
			   list[i].number, list[i].name, list[i].grade);
		printf("------------------------------\n");
	}
	printf("\n==============================");
		

	
}