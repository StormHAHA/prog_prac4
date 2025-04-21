#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>
#include "my_queue.h"

int main() {

    // Создание очереди
    struct Item* queue = (struct Item*)malloc(sizeof(struct Item));
    queue -> next = NULL;
    queue -> prev = NULL;

    // Создание экземпляров списка для добавления их в очередь

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

    // Добавление элементов списка в очередь
    enqueue(queue, queueElem_1);
    enqueue(queue, queueElem_2);
    enqueue(queue, queueElem_3);
    enqueue(queue, queueElem_4);

    // Вывод очереди
    printQueue(queue);


    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    printf("\n========Dequeue 3 times========\n");
    printQueue(queue);
    deleteAll(queue);
    printQueue(queue);
    return 0;
}