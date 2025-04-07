#include <stdio.h>
#include "my_queue.h"

void enqueue(struct Item* queue, struct Item* toAppend) {
    if (queue == NULL || toAppend == NULL) {
        printf("Error: passed NULL pointer\n");
        return;
    }
    if (queue -> next == NULL) {
        queue -> next = toAppend;
        toAppend -> prev = NULL;
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
    if (queue -> next == NULL) {
        printf("Очередь не содержит элементов");
    }
    struct Item* pointer = queue;
    while (pointer -> prev != queue -> first) {
        pointer = pointer -> next;
    }
    pointer -> prev -> next = queue -> first;
    free(pointer);

}