#include <stdio.h>

int A, B, counter; // 전역 변수는 0으로 초기화된다.
int add()
{
	printf("answer : %d\n", counter);
	return A + B;
}
int main(void)
{
	A = 5, B = 7;
	int answer = add();
	printf("%d + %d = %d", A, B, answer);

	return 0;
}