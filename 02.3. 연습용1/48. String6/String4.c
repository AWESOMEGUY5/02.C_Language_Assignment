#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%d \n", (int)strlen("Hello")); // 5
	
	char s1[50], s2[50];
	puts(strcpy(s1, "Hello"));
	for(int i =0; i<50; i++)
		s2[i] = s1[i];
	puts(strcat(s2, " World"));

	int result = strcmp(s1, s2);
	printf("%d", result);
}