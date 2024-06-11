#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80] = { 0 }, s2[90] = { 0 };
	char result;

	printf("첫번째 단어를 입력하시오. : "), gets(s1);
	printf("두번째 단어를 입력하시오. : "), gets(s2);
	result = strcmp(s1, s2); printf("%d\n", result);
	if (result < 0) {
		printf("%s가 %s보다 앞에 있습니다.", s1, s2);
	} else if (result > 0) {
		printf("%s가 %s보다 뒤에 있습니다.", s1, s2);
	} else {
		printf("%s가 %s보다 같습니다.", s1, s2);
	}
}