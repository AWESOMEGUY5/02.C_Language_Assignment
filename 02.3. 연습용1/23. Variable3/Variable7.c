#include <stdio.h>

int x = 50;
int main(void)
{
	int x = 100;
	{
		extern int x;	// 컴파일러는 가까운 블럭내의 코드를 우선 탐색하여 실행하나
						// extern을 사용하면 외부 변수를 사용한다.
		printf("x = %d \n", x);
	}
	return 0;
}