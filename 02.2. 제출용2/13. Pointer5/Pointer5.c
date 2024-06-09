#include <stdio.h>

int main(void)
{
	int i = 10, j = 10, k = 10, l = 10;
	int *p1 = &i, * p2 = &j, * p3 = &k, * p4 = &l;

	printf("원래의 값\n");
	printf("i : %d, p1 : %p\n", i, p1);
	printf("j : %d, p2 : %p\n", j, p2);
	printf("k : %d, p3 : %p\n", k, p3);
	printf("l : %d, p4 : %p\n\n", l, p4);

	printf("수정된 값\n");
	(*p1)++;	// *p1가 먼저 실행( *p1 == 10 ), 그 다음 p++가 실행됨 (*p1 = 11)
	printf("i : %d, p2 : %p\n", i, p1);

	*p2++;		// ++가 먼저 실행( p2++ == p + 1 ), 그다음 *p2가 실행됨 (*p2 == 10)
	printf("j : %d, p1 : %p\n", j, p2);

	++*p3;		// *p3가 먼저 실행( *p3 == 10 ) 그다음 ++ 가 실행 (*p3 == 11)
	printf("k : %d, p3 : %p\n", k, p3);

	*++p4;		// ++가 먼저 실행( ++p4 == p + 1 ), 그다음 *p4가 실행됨 (*p4 == 10)
	printf("l : %d, p4 : %p\n", l, p4);
	
	// 1순위 : 왼쪽에서 오른쪽
	// 2순위 : 오른쪽에서 왼쪽
}