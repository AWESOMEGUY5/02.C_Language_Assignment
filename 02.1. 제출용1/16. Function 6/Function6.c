#include <stdio.h>

// 함수 원형, C/ C++는 함수 원형이 꼭 필요하다.
// C는 main 먼저 설행되기 때문에 나중에 실행될 c_to_f함수를 모른다.
// 그러므로 함수 원형을 사용하여 미리 메모리에 적재를 해 둔다.
double c_to_f(double c_temp);

double main(void)
{
	printf("섭씨 %g도는 화씨 %g도 입니다. \n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}