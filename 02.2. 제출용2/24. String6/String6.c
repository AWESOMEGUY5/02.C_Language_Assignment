#include <stdio.h>

int main(void)
{
	char fruits[3][20];
	
	for (int i = 0; i < 3; i++) {
		printf("과일 이름을 입력하시오."), gets(fruits[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d번째 과일 : %s\n", i + 1, fruits[i]);
	}
}