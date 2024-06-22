#include <stdio.h>

void sum_avg(const int* a, int n, int* psum, double* pavg);

int main(void)
{
	int sum;
	double average;
	int a[4] = { 1,2,3,4 };
	sum_avg(a, 4, &sum, &average);
}

void sum_avg(const int* a, int n, int* psum, double* pavg)
{
	*psum = 0;
	for (int i = 0; i < n; i++) {
		*psum += *(a + i);
	}
	*pavg = (double)*psum / n;
	printf("%d %g", *psum, *pavg);
}