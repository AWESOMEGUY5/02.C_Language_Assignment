#include <stdio.h>
void print_stars()
{
	for (int i = 0; i < 30; i++) {
		printf("*");
	}
}

int main(void)
{
	print_stars(); // 함수 호출
	printf("\nHello world\n");
	print_stars(); // 함수 호출

	return 0;
}