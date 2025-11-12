/**
 * @file shape.h
 * @author Mark
 * @brief Модуль фигуры
 * @version 0.1
 * @date 2025-11-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "point.h"

typedef struct Shape shape_t;
typedef struct ShapeVTable vft_shape_t;

/**
 * @brief Тип функции для отрисовки абстрактной фигуры
 * 
 */
typedef void (*draw_func_t)(const struct Shape *);

/**
 * @brief Тип функции для смешения фигуры в новый центр
 * 
 */
typedef void (*move_func_t)(struct Shape *, int, int);

/**
 * @brief Таблица виртуальных функций Фигуры
 * 
 */
typedef struct ShapeVTable
{
    draw_func_t draw;
    move_func_t move;
} vft_shape_t;

/**
 * @brief Абстрактная Фигура
 * 
 */
typedef struct Shape
{
    vft_shape_t* vtable; ///< Таблица виртуальный функций
    point2_t* origin; ///< Точка центра фигуры
} shape_t;

/**
 * @brief Функция для смещения Фигуры в новый центр
 * 
 * @param c shape_t* указатель на фигуру
 * @param x int абсцисса нового центра фигуры
 * @param y int ордината нового центра фигуры
 */
void shape_move(shape_t *c, int x, int y);

/**
 * @brief Метод для смещения Фигуры в новый центр
 * 
 * Полиморфная обертка
 * 
 * @param c shape_t* указатель на фигуру
 * @param x int абсцисса нового центра фигуры
 * @param y int ордината нового центра фигуры
 */
void move(shape_t *c, int x, int y);

/**
 * @brief Метод для отрисовки Фигуры
 * 
 * Полиморфная обертка
 * 
 * @param c shape_t* указатель на фигуру
 */
void draw(const shape_t *c);