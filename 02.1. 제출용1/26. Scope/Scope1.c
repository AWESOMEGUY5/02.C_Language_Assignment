#include <stdio.h>

int sum = 1;
int main(void)
{
	// 변수의 호츨은  같은 스코프의 지역 변수에서 전역변수로 컴파일러가 찾는다.

	//int sum = 2;
	{
		//int sum = 0;
		printf("%d", sum);
	}
	

	return 0;
}