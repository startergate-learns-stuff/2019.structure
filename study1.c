#include <stdio.h>
#include <stdlib.h>
#include "study1.h"

void StackInit(Stack * stack) {
	stack->topIndex = -1;
}

int SIsEmpty(Stack * stack) {
	if (stack->topIndex == -1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void SPush(Stack * stack, Data data) {
	if (stack->topIndex == STACK_LEN - 1)
	{
		printf("Stack Memory Error");
		exit(-1);
	}

	stack->topIndex += 1;
	stack->stackArr[stack->topIndex] = data;
}

Data SPop(Stack * stack) {
	if (SIsEmpty(stack))
	{
		printf("Stack Memory Error");
		exit(-1);
	}

	int rIdx = stack->topIndex;
	stack->topIndex -= 1;

	return stack->stackArr[rIdx];
}

Data SPeek(Stack * stack) {

	if (SIsEmpty(stack))
	{
		printf("Stack Memory Error");
		exit(-1);
	}

	return stack->stackArr[stack->topIndex];
}