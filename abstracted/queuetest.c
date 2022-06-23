#include <stdio.h>
#include <stdlib.h>
#include "myqueue.h"

int main()
{
	queue *q1 = q_create(5);

	q_enqueue(q1, 56);
	q_enqueue(q1, 78);
	q_enqueue(q1, 23);
	q_enqueue(q1, 988);
	q_enqueue(q1, 13);
	q_enqueue(q1, 2);

	int tmp;

	while ((tmp = q_dequeue(q1)) != QUEUE_EMPTY) {
		printf("t = %d\n", tmp);
	}

	q_destroy(q1);
	return 0;
}
