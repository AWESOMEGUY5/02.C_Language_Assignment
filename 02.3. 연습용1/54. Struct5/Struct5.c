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
		printf("�й��� �Է��Ͻÿ�. : "), scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�. : "), scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�. : "), scanf("%lf", &list[i].grade);
	}
	printf("==============================\n");
	for (int i = 0; i < 3; i++) {
		printf("�й� : %d \n�̸� : %s \n���� : %g\n",
			   list[i].number, list[i].name, list[i].grade);
		printf("------------------------------\n");
	}
	printf("\n==============================");
		

	
}