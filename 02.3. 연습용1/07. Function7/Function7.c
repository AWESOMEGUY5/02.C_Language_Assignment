// 함수 원형을 사용하지 않는 예제
#include <stdio.h>

// 함수 정의가 함수 호출보다 먼저 오면 함수 원형을 정의하지 않아도 된다. 
// 그러나 일반적인 방법은 아니다.
int cal_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++) {
		result += i;
	}
	return result;
}

int main(void)
{
	int sum = cal_sum(100);
	printf("sum = %d \n", sum);
}
