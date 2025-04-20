#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>
#include "my_queue.h"

int main() {

    struct Item* queue = (struct Item*)malloc(sizeof(struct Item));
    queue -> next = NULL;
    struct Item* queueElem_1 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_1 -> value = 1;
    queueElem_1 -> next = NULL;
    queueElem_1 -> prev = NULL;
    struct Item* queueElem_2 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_2 -> value = 2;
    queueElem_2 -> next = NULL;
    queueElem_2 -> prev = NULL;
    struct Item* queueElem_3 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_3 -> value = 3;
    queueElem_3 -> next = NULL;
    queueElem_3 -> prev = NULL;
    struct Item* queueElem_4 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_4 -> value = 4;
    queueElem_4 -> next = NULL;
    queueElem_4 -> prev = NULL;

    enqueue(queue, queueElem_1);
    enqueue(queue, queueElem_2);
    enqueue(queue, queueElem_3);
    enqueue(queue, queueElem_4);
    printQueue(queue);
    dequeue(queue);
    printf("\nDequeue\n");
    printQueue(queue);
    dequeue(queue);
    printf("\nDequeue\n");
    printQueue(queue);
    dequeue(queue);
    printf("\nDequeue\n");
    printQueue(queue);
    dequeue(queue);
    printf("\nDequeue\n");
    printQueue(queue);
    return 0;
}