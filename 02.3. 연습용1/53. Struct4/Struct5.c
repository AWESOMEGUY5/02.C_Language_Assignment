#include <stdio.h>
struct point { int x, y; };

int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	p2 = p1;

	if (p1.x == p2.x || p1.y == p2.y) {
		printf("p1�� p2�� ���� �����ϴ�.");
	} else {
		printf("p1�� p2�� ���� �ٸ��ϴ�.");
	}
}