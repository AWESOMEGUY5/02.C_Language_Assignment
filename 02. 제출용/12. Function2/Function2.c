#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//왼쪽부터 오른쪽으로, 반환명 함수이름(매개변수1, 매개변수2){}
int max(int x, int y)
{
	if (x > y) {
		return x;
	} else {
		return y;
	}
}

int main(void)
{
	int a, b, n, larger;

	printf("정수 2개를 입력하십시오. : "), n = scanf("%d %d", &a, &b);
	if (n == 2) {
		larger = max(a, b);
		printf("더 큰 값은 %d입니다.\n", larger);
		return 0;
	} else {
		printf("잘못된 형식입니다.");
		return 1;
	}

	
}