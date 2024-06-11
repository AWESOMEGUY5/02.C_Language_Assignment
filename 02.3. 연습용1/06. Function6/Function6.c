// 함수 원형

#include <stdio.h>

// 함수 원형 : 컴파일러에게 함수에 대하여 미리 알리는 것
double c_to_f(double c_temp);

int main(void)
{
	double cel;
	printf("변환할 온도를 입력하시오. (단위:섭씨) : "), scanf_s("%lf", &cel);
	printf("섭씨 %g도는 화씨 %g도 입니다.", cel, c_to_f(cel));
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}