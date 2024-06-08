#include <stdio.h>

void sub()
{
	static int scount = 0;	// 지역 정적 변수 : 실행 시 단 한번만 초기화 됨.
	int account = 0;		// 지역 자동 변수 : 함수 호출 시 매번 다시 초기화됨.

	printf("scount = %d, acount = %d\n", scount, account);

	scount++, account++;
}

int main(void)
{
	for (int i = 0; i < 3; i++) {
		sub();
	}
	return 0;
}