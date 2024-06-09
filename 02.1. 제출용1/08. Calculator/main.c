#include <stdio.h>
#include "operation.h"

int main()
{
	add(20), add(30), sub(10);
	printf("operation result : %d\n", operation_result);

	operation_result = 100;
	add(20), add(30), sub(10);
	printf("opreation result : %d\n", operation_result);

	printf("total operation result : %d\n", get_count());
	return 0;
}