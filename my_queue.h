#pragma once
#define MY_QUEUE_H
#include "laptop.h"
// Описание линейного двухсвязного списка
struct Item {
    struct Laptop* value;   //Значение узла списка 
    struct Item* next;      //Указатель на следующий узел списка
    struct Item* prev;      //Указатель на предыдущий узел списка
};

void enqueue(struct Item* queue, struct Item* toAppend);
void dequeue(struct Item* queue);
void deleteAll(struct Item* queue);
void printQueue(struct Item* queue);