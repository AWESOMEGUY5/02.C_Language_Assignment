#include <stdio.h>

int main(void)
{
	int x = 10, *p = &x;
	// x  : 10;
	// *p : 10;
	// p  : x의 주소
	printf("x의 값 : %5d \n*p의 값 : %4d \np의 값 : %5p", x, *p, &p);
}