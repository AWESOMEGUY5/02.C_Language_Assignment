#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Point {int x, y};
struct Rect { struct Point p1, p2 };

int main(void)
{
	struct Rect r;
	int w, h, c1, c2;

	printf("왼쪽 상단의 좌표를 입력하시오. :"), c1 = scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 하단의 좌표를 입력하시오. : "), c2 = scanf("%d %d", &r.p2.x, &r.p2.y);

	if (c1 + c2 == 4) {
		w = r.p2.x - r.p1.x;
		h = r.p2.y - r.p2.y;

		printf("면적 : %d, 둘레 : %d", w * h, 2 * (w + h));

		return 0;
	} else {
		printf("잘못된 형식");

		return 1;
	}
}