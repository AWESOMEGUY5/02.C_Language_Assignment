#include <stdio.h>

struct Date { int month, day, year; };
struct Student
{
	int number;
	char name[20];
	double grade;
	struct Date* dob;
};

int main(void)
{
	struct Date d = { 06, 12, 2024 };
	struct Student s = { 202417101, "kim", 4.1, &d };

	printf("�й� : %d, �̸� : %s, ���� : %g\n", s.number, s.name, s.grade, s.dob);
	printf("������� : %d�� %d�� %d��", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}