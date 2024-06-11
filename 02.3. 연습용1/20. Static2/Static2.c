#include <stdio.h>
#include <Windows.h>

void hw_init();

int main(void)
{
	hw_init();
	hw_init();
	hw_init();

	return 0;
}

void hw_init()
{
	static int inited = 0;
	if (inited == 0) {
		printf("초기화 중... \n");
		Sleep(2000);
		inited = 1;
	} else {
		Sleep(1000);
		printf("이미 초기화가 완료되었습니다. \n");
	}
}