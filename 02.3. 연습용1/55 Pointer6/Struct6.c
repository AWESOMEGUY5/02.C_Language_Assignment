#include <stdio.h>

struct student
{
	int ID;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s[] = {202417101, "�����", 4.1};
	struct student* p = s;

	printf("�й� : %d, �̸� : %s, ���� : %g\n", s[0].ID, s[0].name, s[0].grade);
	printf("�й� : %d, �̸� : %s, ���� : %g\n", (*p).ID, (*p).name, (*p).grade);
	printf("�й� : %d, �̸� : %s, ���� : %g\n", p->ID, p->name, p->grade);

	return 0;
}