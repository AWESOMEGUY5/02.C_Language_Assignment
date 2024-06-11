#include <stdio.h>

int x;
void sub();
int main(void)
{
	for (x; x < 10; x++) {
		sub();
	}
}
void sub()
{
	for (x = 0; x < 10; x++) {
		printf("*");
	}
}

// 여러 함수에서 사용하는 공통적인 데이터는 전역 변수로 한다.
// 일부 함수들만 사용하는 데이터는 전역변수로 하지 말고 함수의 인자로 전달한다.