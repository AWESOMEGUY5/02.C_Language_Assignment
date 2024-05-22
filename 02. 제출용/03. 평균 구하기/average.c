#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int average()
{	
	int n = 0; double data, sum = 0;
	while (scanf("%lf", &data) == 1) {
		sum += data;
		n++;
	}
	if (!n)
		return printf("no data\n"), 1;
	printf("Average : %g\n", sum / n);
}

int main(void)
{
	average(); 
}