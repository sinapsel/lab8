/**
 * @file circle.c
 * @author Mark
 * @brief Moudle for circle
 * @version 0.1
 * @date 2025-11-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "circle.h"

/**
 * @brief Функция для отрисовки круга
 * 
 * @param shape const shape_t * принимает указатель на фигуру для ее отрисовки
 */
static void circle_draw(const shape_t *shape)
{
    const circle_t *circle = (const circle_t *)shape;
    printf("Circle at (%d, %d), R=%d\n",
           pgetx(circle->base.origin), pgety(circle->base.origin),
            circle->radius);
}

static vft_shape_t circle_vtable = {
    circle_draw,
    shape_move
};

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
circle_t *circle_create(int x, int y, int radius)
{
    circle_t *circle = malloc(sizeof(circle_t));
    if (circle == NULL) return NULL;
    point2_t *origin = pnew();
    psetx(origin, x);
    psety(origin, y);
    circle->base.origin = origin;
    circle->base.vtable = &circle_vtable;
    circle->radius = radius;
    return circle;
}