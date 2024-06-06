#include "operation.h"

int operation_result;
static int operation_count;

static void perform_operation(int value)
{
	operation_count++;
}

void add(int value)
{
	operation_result += operation_result;

}