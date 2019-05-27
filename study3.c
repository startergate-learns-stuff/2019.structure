#include <stdio.h>
#include <stdlib.h>
#include "study3.h"

void QueueInit(Queue * q) {
	q->front = 0;
	q->rear = 0;
}

int QIsEmpty(Queue * q) {
	if (q->front == q->rear)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int NextPosIdx(int idx) {
	if (idx == QUE_LEN - 1)
	{
		return 0;
	}
	else {
		return idx + 1;
	}
}

void Enqueue(Queue * q, Data data) {
	if (NextPosIdx(q->rear) == q->front)
	{
		printf("Stack Memory Error");
		exit(-1);
	}
	q->rear = NextPosIdx(q->rear);
	q->queArr[q->rear] = data;
}

Data Dequeue(Queue * q) {
	if (QIsEmpty(q))
	{
		printf("Stack Memory Error");
		exit(-1);
	}

	q->front = NextPosIdx(q->front);
	return q->queArr[q->front];
}

Data QPeek(Queue * q) {
	if (QIsEmpty(q))
	{
		printf("Stack Memory Error");
		exit(-1);
	}

	return q->queArr[NextPosIdx(q->front)];
}