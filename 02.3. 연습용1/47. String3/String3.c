#include <stdio.h>

int main(void)
{
	char name[100], address[100];

	printf("이름을 입력하시오. "), gets(name);
	printf("주소를 입력하시오. "), gets(address);
	puts(name), puts(address);

	return 0;
}