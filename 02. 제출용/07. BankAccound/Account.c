#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void account(int account)
{
	static int balance = 0;
	if (account >= 0) {
		printf("\t\t%d\t\t    ", account);
	} else {
		printf("\t\t\t%d\t    ", -account);
	}
	balance += account;
	printf("%d\n", balance);
}
int main(void)
{
	printf("=============================================\n");
	printf("입금액\t\t입금\t출금\t    잔고\n");
	printf("---------------------------------------------\n");
	
	while (1) {
		int input;
		
		if (scanf("%d", &input) == 1) {
			account(input);
		} else {

			while (getchar() != '\n');
			
			printf("\t\t---잘못된 형식---\n");
			
		}
	}
	printf("=============================================\n");

	return 0;


	
}