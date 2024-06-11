// 로또 번호 생성 v1
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	for (int i = 0; i < 6; i++) {
		printf("%d ", rand());
	}
	return 0;
}