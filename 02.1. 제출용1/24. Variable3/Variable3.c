#include <stdio.h>

int x; // 전역 변수
void sub();

int main(void)
{
	for (x = 0; x < 10; x++) {
		sub();
	}
}

void sub()
{
	for (int i = 0; i < 10; i++) {
		printf("*");
	}
	printf("\n");
}