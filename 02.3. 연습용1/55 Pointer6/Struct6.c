#include <stdio.h>

struct student
{
	int ID;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s[] = {202417101, "한장수", 4.1};
	struct student* p = s;

	printf("학번 : %d, 이름 : %s, 학점 : %g\n", s[0].ID, s[0].name, s[0].grade);
	printf("학번 : %d, 이름 : %s, 학점 : %g\n", (*p).ID, (*p).name, (*p).grade);
	printf("학번 : %d, 이름 : %s, 학점 : %g\n", p->ID, p->name, p->grade);

	return 0;
}