#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>
#include "laptop.h"
#include "my_queue.h"

int main() {

    // Создание экземпляров ноутбука которые будут добавлены в очередь
    struct Laptop* toAppend_1 = (struct Laptop*)malloc(sizeof(struct Laptop));
    struct Laptop* toAppend_2 = (struct Laptop*)malloc(sizeof(struct Laptop));
    struct Laptop* toAppend_3 = (struct Laptop*)malloc(sizeof(struct Laptop));
    struct Laptop* toAppend_4 = (struct Laptop*)malloc(sizeof(struct Laptop));

    // Инициализация "свободных структур"
    struct Laptop* m1 = initDynamicStruct("ASUS", "Core i5", false, 14, 14.000);
    struct Laptop* m2 = initDynamicStruct("MSI", "Core i5", false, 14, 14.000);
    struct Laptop* m3 = initDynamicStruct("APPLE", "Core i5", false, 14, 14.000);
    struct Laptop* m4 = initDynamicStruct("HP", "Core i5", false, 14, 14.000);

    // Дополнительное использование структур...


    // Копирование значений "свободных структур" в экземпляры для очереди
    structCopy(toAppend_1, m1);
    structCopy(toAppend_2, m2);
    structCopy(toAppend_3, m3);
    structCopy(toAppend_4, m4);
    
    free(m1);
    free(m2);
    free(m3);
    free(m4);
    // Создание очереди
    struct Item* queue = (struct Item*)malloc(sizeof(struct Item));
    queue -> next = NULL;
    queue -> prev = NULL;

    // Создание элементов которые будут добавлены в очередь
    struct Item* queueElem_1 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_1 -> value = toAppend_1;
    queueElem_1 -> next = NULL;
    queueElem_1 -> prev = NULL;
    struct Item* queueElem_2 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_2 -> value = toAppend_2;
    queueElem_2 -> next = NULL;
    queueElem_2 -> prev = NULL;
    struct Item* queueElem_3 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_3 -> value = toAppend_3;
    queueElem_3 -> next = NULL;
    queueElem_3 -> prev = NULL;
    struct Item* queueElem_4 = (struct Item*)malloc(sizeof(struct Item));
    queueElem_4 -> value = toAppend_4;
    queueElem_4 -> next = NULL;
    queueElem_4 -> prev = NULL;

    // Добавление элементов в очередь
    enqueue(queue, queueElem_1);
    enqueue(queue, queueElem_2);
    enqueue(queue, queueElem_3);
    enqueue(queue, queueElem_4);

    printQueue(queue);
    
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    printf("\n========Dequeue 3 times========\n");
    printQueue(queue);
    deleteAll(queue);
    
    return 0;
}