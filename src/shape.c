/**
 * @file shape.с
 * @author Mark
 * @brief Модуль фигуры
 * @version 0.1
 * @date 2025-11-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "shape.h"

/**
 * @brief Функция для смещения Фигуры в новый центр
 * 
 * @param c shape_t* указатель на фигуру
 * @param x int абсцисса нового центра фигуры
 * @param y int ордината нового центра фигуры
 */
void shape_move(shape_t *c, int x, int y)
{
    c->x = x;
    c->y = y;
}

/**
 * @brief Метод для смещения Фигуры в новый центр
 * 
 * Полиморфная обертка
 * 
 * @param c shape_t* указатель на фигуру
 * @param x int абсцисса нового центра фигуры
 * @param y int ордината нового центра фигуры
 */
void move(shape_t *c, int x, int y)
{
    c->vtable->move(c, x, y);
}

/**
 * @brief Метод для отрисовки Фигуры
 * 
 * Полиморфная обертка
 * 
 * @param c shape_t* указатель на фигуру
 */
void draw(const shape_t *c)
{
    c->vtable->draw(c);
}