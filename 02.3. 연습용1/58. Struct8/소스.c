#include <stdio.h>

struct student
{
	double score;
};

double get_sum(const struct student *a, int n)
{
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum += a[i].score;
	}
	return sum;
}
int main(void)
{
	double a[] = { 4.2, 3.8, 3.2, 2.8 };
	
	printf("%g", get_sum(a, 4));
}