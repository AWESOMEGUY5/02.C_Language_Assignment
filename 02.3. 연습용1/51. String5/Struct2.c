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
	printf("�й��� �Է��Ͻÿ�. : "), scanf("%u", &s.number);
	printf("�̸��� �Է��Ͻÿ�. : "), scanf("%s", s.name);
	printf("������ �Է��Ͻÿ�. : "), scanf("%lf", &s.grade);

	printf("\n�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %g\n", s.grade);

	return 0;
}