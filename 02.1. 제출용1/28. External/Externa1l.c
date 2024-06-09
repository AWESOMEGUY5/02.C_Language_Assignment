#include <stdio.h>

// static으로 선언되는 경우 내부연결만 가능하기 때문에 해당 소스파일 내에서만 사용 가능하다.
//extern void f1();
extern void	f2();
int main(void)
{
	// f1();
	f2();
	return 0;
}