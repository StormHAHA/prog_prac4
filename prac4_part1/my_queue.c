#include <stdio.h>
#include <stdlib.h>
#include "my_queue.h"

void enqueue(struct Item* queue, struct Item* toAppend) {
    if (queue == NULL || toAppend == NULL) {
        printf("Error: passed NULL pointer\n");
        return;
    }
    if (queue -> next == NULL) {
        queue -> next = toAppend;
        toAppend -> prev = NULL;
        toAppend -> next = NULL;
    } else {
        struct Item* first = queue -> next;
        queue -> next = toAppend;
        toAppend -> prev = NULL;
        toAppend -> next = first;
        first -> prev = toAppend;
    }
}
void dequeue(struct Item* queue) {
    if (queue == NULL) {
        printf("Error: passed NULL pointer\n");
        return;
    }
    if (queue->next == NULL) {
        printf("Очередь не содержит элементов\n");
        return;
    }

    struct Item* prev = queue;
    struct Item* current = queue->next;

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    // Теперь current — последний элемент, prev — предпоследний
    prev->next = NULL;  // Предпоследний элемент теперь последний

    // Освобождаем память (если value — динамический, сначала его)
    free(current);
}
void deleteAll(struct Item* queue) {
    if (queue == NULL || queue -> next == NULL) {
        printf("ОШИБКА!\n");
        return;
    }
    struct Item* leftPtr = queue;
    struct Item* rightPtr = queue -> next;
    while(rightPtr -> next != NULL) {
        leftPtr = rightPtr;
        rightPtr = rightPtr -> next;
        free(leftPtr);
    }
    free(rightPtr);
    queue -> next = NULL;
    printf("Выполнена очистка очереди");
}

void printQueue(struct Item* queue) { 
    if (queue == NULL) {
        printf("Ошибка: передан NULL укащатель\n");
        return;
    }
    struct Item* pointer = queue;

    while(pointer -> next != NULL) {
        pointer = pointer -> next;
        printf("%d", pointer -> value);
        printf("\n");
    }
}