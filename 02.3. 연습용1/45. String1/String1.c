#include <stdio.h>

int main(void)
{
	char str1[6] = "Seoul"; // 문자열은 마침 문자가 반드시 있어야 한다.
	char str2[3] = { 'i', 's','\0' };
	char str3[] = "the capital city of korea";
	printf("%s %s %s", str1, str2, str3);
	return 0;
}