#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	struct student
	{
		unsigned number;
		char name[10];
		double grade;
	};

	struct student s;
	printf("학번을 입력하시오. : "), scanf("%u", &s.number);
	printf("이름을 입력하시오. : "), scanf("%s", s.name);
	printf("학점을 입력하시오. : "), scanf("%lf", &s.grade);

	printf("\n학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %g\n", s.grade);

	return 0;
}