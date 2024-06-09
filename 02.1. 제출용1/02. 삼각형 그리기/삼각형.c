#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int reapeatNum ,n;

	printf("삼각형의 크기를 입력하시오. : "), n = scanf("%d", &reapeatNum);

	if (n == 1) {
		for (int x = 0; x < reapeatNum; x++) {
			for (int y = 0; y <= x; y++) {
				printf("*");
			}
			printf("\n");
		}
		return 0;
	} else {
		printf("잘못된 형식입니다.");
		return 1;
	}
}