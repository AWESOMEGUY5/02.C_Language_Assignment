#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int math_test()
{	
	// 정수형 절댓값
	printf("정수 절댓값 : %d %ld\n", abs(-18840), labs(-451215153));
	// 실수형 절댓값
	printf("실수 절댓값 : %g\n", fabs(-3.67));

	// 거듭제곱
	printf("거듭제곱 : %g\n", pow(2.0, 4.0));
	// 제곱근
	printf("제곱근 : %g\n", sqrt(16.0));

	// 올림
	printf("올림 : %g %g\n", ceil(-2.4), ceil(7.1));
	// 내림
	printf("내림 : %g %g\n", floor(-2.4), floor(7.1));
	// 반올림
	printf("반올림 : %g %g\n", round(-2.4), round(7.6));
}

int main(void)
{
	math_test();
}