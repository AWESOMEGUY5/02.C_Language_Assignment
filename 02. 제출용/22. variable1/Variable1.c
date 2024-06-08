#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++) {
		// 지역 변수, 초기화가 반드시 일어나야 한다.
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
	}
	return 0;
}