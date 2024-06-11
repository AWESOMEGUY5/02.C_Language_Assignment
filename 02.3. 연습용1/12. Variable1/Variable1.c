#include <stdio.h>


int main(void)
{
	// temp의 스코프 : for문 블럭 내부로 
	for (int i = 0; i < 5; i++) {
		int temp = 1; 
		// 지역 변수는 초기화하여야 하며 초기화가 안된 경우 쓰래기값을 지닌다.
		printf("temp : %d\n", temp);
		temp++;
	}
	return 0;
}