#include <stdio.h>

void pointer1()
{
	//int* p;								// p(주소) : 변경 가능     *p(내용) : 변경 가능
	//const int* p;							// p(주소) : 변경 가능     *p(내용) : 변경 불가능
	int n = 0; const int* p1 = &n;			// p(주소) : 변경 불가능   *p(내용) : 변경 가능
	const int* m = 0; const int* p2 = &m;	// p(주소) : 변경 불가능   *p(내용) : 변경 불가능
}

void sum_mul(int num1, int num2, int *psum, int *pmul)
{
	*psum = num1 + num2;
	*pmul = num1 * num2;
}

int main(void)
{
	int sum, mul;
	sum_mul(10, 20, &sum, &mul);
	printf("합 : %d, 곱 : %d", sum, mul);

	return 0;
}