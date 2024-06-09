#include <stdio.h>

#define PRODUCT 5

int sum(int sales[][PRODUCT], int years);

int main(void)
{
	int sales[][PRODUCT] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	// sum(sales, sizeof sales / sizeof sales[0]); -> 함수 호출(sales 배열, 배열의 전체 크기(36)/0번째 배열의 크기(12)) -> 3
	int total_sale = sum(sales, sizeof sales / sizeof sales[0]);
	printf("총 매출은 %d입니다.\n", total_sale);

	return 0;
}

int sum(int sales[][PRODUCT], int years)
{
	int total = 0;
	for (int y = 0; y < years; y++) {
		for (int  p = 0; p < PRODUCT; p++) {
			total += sales[y][p];
		}
	}
	return total;
}