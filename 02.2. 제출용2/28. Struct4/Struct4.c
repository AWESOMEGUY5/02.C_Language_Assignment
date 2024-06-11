#include <stdio.h>

struct Point { int x, y; };

int main(void)
{
	struct Point p1 = { 10,20 };
	struct Point p2 = { 30,40 };

	p2 = p1; // 대입 가능

	// if (p1 == p2) -> 비교 불가능, 컴파일 에러

	if (p1.x == p2.x && p1.y == p2.y) {
		printf("p1과 p2가 서로 같습니다.");
	}

	return 0;
}