#include <stdio.h>
#include <stdlib.h>
#include "study2.h"

void StackInit(Stack * stack) {
	stack->head = NULL;
}

int SIsEmpty(Stack * stack) {
	if (stack->head == NULL)
	{
		return TRUE;
	}
	else {
		return FALSE;
	}
}

void SPush(Stack * stack, Data data) {
	Node * newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;

	newNode->next = stack->head;

	stack->head = newNode;
}

Data SPop(Stack * stack) {
	if (SIsEmpty(stack))
	{
		printf("Stack Memory Error");
		exit(-1);
	}
	Node * rNode = stack->head;
	Data rdata = rNode->data;
	stack->head = rNode->next;
	free(rNode);
	return rdata;
}

Data SPeek(Stack * stack) {
	if (SIsEmpty(stack))
	{
		printf("Stack Memory Error");
		exit(-1);
	}
	return stack->head->data;
}