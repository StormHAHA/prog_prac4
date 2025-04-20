#pragma once
#define MY_QUEUE_H
// Описание линейного двухсвязного списка
struct Item {
    int value;
    struct Item* next;
    struct Item* prev;
};

void enqueue(struct Item* queue, struct Item* toAppend);
void dequeue(struct Item* queue);
void deleteAll(struct Item* queue);
void printQueue(struct Item* queue);