#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Point {int x, y};
struct Rect { struct Point p1, p2 };

int main(void)
{
	struct Rect r;
	int w, h, c1, c2;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�. :"), c1 = scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("������ �ϴ��� ��ǥ�� �Է��Ͻÿ�. : "), c2 = scanf("%d %d", &r.p2.x, &r.p2.y);

	if (c1 + c2 == 4) {
		w = r.p2.x - r.p1.x;
		h = r.p2.y - r.p2.y;

		printf("���� : %d, �ѷ� : %d", w * h, 2 * (w + h));

		return 0;
	} else {
		printf("�߸��� ����");

		return 1;
	}
}