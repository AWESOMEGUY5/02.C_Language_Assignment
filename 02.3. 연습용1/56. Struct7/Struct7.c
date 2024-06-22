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

	printf("학번 : %d, 이름 : %s, 학점 : %g\n", s.number, s.name, s.grade, s.dob);
	printf("생년월일 : %d년 %d월 %d일", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}