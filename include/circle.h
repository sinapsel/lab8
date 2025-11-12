#pragma once
#include "shape.h"

/**
 * @brief Круг
 * 
 * Наследник абстрактной фигуры
 * 
 */
typedef struct Circle {
    shape_t base; ///< Родитель (абстрактная фигура)
    int radius; ///< Радиус круга
} circle_t;

/**
 * @brief Конструктор для круга
 * 
 * @param x int абсцисса начала нового круга
 * @param y int ордината начала нового круга
 * @param radius int радиус круга
 * @return circle_t* указатель на созданный круг
 * 
 * @note возвращает NULL
 */
circle_t *circle_create(int x, int y, int radius);