#ifndef LAPTOP_H
#define LAPTOP_H

#include <stdbool.h>

#define N 30


struct Laptop {
    char vendor[N];         // Название производителя ноутбука
    char processorModel[N]; // Модель процессора
    bool hasGamingVideoChip;// Наличие игрового видеочипа
    float displayWide;      // Диагональ экрана
    float price;            // Цена ноутбука
};

int isCorrectStruct(const struct Laptop* m);
int structInit(struct Laptop* m, const char* vendor, const char* processorModel, bool hasGamingVideoChip, float displayWide, float price);
void printStruct(const struct Laptop* m);
struct Laptop* initDynamicStruct(const char *vendor, const char *processorModel, bool hasGamingVideoChip, float displayWide, float price);
void removeStruct(struct Laptop* laptop);
#endif // LAPTOP_H / др вар #pragma once