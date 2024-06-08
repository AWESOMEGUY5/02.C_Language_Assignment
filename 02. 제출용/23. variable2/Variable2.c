#include <stdio.h>

void idc(int counter);

 int main(void)
{
	int i = 10;
	printf("함수 호출 전 : i = %d\n", i);
	idc(i);
	printf("함수 호출 후 : i = %d\n", i);
	return 0;
}

void idc(int counter)
{
	counter++;
}