#include <stdio.h>

int sum = 1; // 지역 변수가 없으면 얘가 실행됨
int main(void)
{
	int sum = 0; // 얘가 실행됨
	printf("sum = %d\n", sum);
	
	return 0;
}