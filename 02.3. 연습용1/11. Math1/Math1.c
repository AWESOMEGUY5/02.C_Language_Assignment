#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	printf("절댓값 : %g\n", fabs(-3.67));
	printf("거듭제곱 : %g\n", pow(2, 5));
	printf("제곱근 : %g\n", sqrt(16.0));
	printf("올림 : -2.5 -> %g | 1.2 -> %g\n", ceil(-2.5), ceil(1.2));
	printf("버림 : -2.5 -> %g | 1.2 -> %g\n", floor(-2.5), floor(1.2));
	printf("반올림 : -2.5 -> %g | 1.2 -> %g\n", round(-2.5), round(1.2));

	printf("소숫점 이하 버림 : %d\n", (int)2.9);

	printf("<정수형 절댓값> \n-9 : %d | -900L : %ld\n", abs(-9), labs(-900L));
}