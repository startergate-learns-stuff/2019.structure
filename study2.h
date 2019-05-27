#pragma once


#ifndef __LB_STACK_H__
#define __LB_STACK_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node {
	Data data;
	struct _node * next;
} Node;

typedef struct _listStack {
	Node * head;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack * stack);
int SIsEmpty(Stack * stack);

void SPush(Stack * stack, Data data);
Data SPop(Stack * stack);
Data SPeek(Stack * stack);

#endif // !__LB_STACK_H__
