#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Point { int x, y; };
struct Rect { struct Point p1, p2; };

int main(void)
{
	struct Rect r;
	int w, h;

	printf("왼쪽 상단의 좌표를 입력하시오. "), scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 하단의 좌표를 입력하시오. "), scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	printf("면적은 %d이고 둘레는 %d입니다.", w * h, 2 * (w + h));
}