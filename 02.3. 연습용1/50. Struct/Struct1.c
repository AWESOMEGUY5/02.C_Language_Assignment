#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;
};
int main(void)
{
	struct student s;
	
	s.number = 202417101;
	strcpy(s.name, "�����");
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %g\n", s.grade);

	return 0;
}