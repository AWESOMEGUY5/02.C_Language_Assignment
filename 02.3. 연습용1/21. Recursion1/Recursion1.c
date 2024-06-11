#include <stdio.h>

unsigned factorial(unsigned repeatNum);

int main(void)
{
	unsigned repeatNum;
	printf("정수를 입력하시오. : "), scanf_s("%u", &repeatNum);
	printf("%d!는 %d입니다.", repeatNum, factorial(repeatNum));
}

unsigned factorial(unsigned repeatNum)
{
	printf("factorial(%d)\n", repeatNum);
	if (repeatNum <= 1) 
		return 1;
	else 
		return repeatNum * factorial(repeatNum - 1);
}