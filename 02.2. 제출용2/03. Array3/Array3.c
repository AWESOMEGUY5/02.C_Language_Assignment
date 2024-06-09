#include <stdio.h>

// 배열의 복사
int main(void)
{
	int a[5] = { 1,2,3,4,5 }, b[5] = { 0 };
	printf("변경 전\n");
	for(int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
		b[i] = a[i]; // 원소를 하나하나 복사하여야 한다.
	}
	printf("\n변경 후\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);
}