#include "rect.h"

static void rect_draw(const shape_t *shape)
{
    const rect_t *rect = (const rect_t *)shape;
    printf("Rect at (%d, %d), W=%d, H=%d\n",
           rect->base.x, rect->base.y, rect->w, rect->h);
}

static vft_shape_t rect_vtable = {
    rect_draw,
    shape_move
};

/**
 * @brief Конструктор прямоугольника. 
 * Выделяет память под новую фигуру и возвразает указатель на нее или NULL
 * 
 * @param x Абсцисса абсцисса центра новой фигуры
 * @param y Ордината абсцисса центра новой фигуры
 * @param w Ширина нового прямоугольника
 * @param h Высота нового прямоугольника
 * @return rect_t* указатель на новый прямоугольник или NULL
 * 
 * @note Возвращает NULL
 */
rect_t *rect_create(int x, int y, int w, int h)
{
    rect_t *rect = (rect_t *)malloc(sizeof(rect_t));
    if (rect == NULL) return NULL;
    rect->base.x = x;
    rect->base.y = y;
    rect->base.vtable = &rect_vtable;
    rect->w = w;
    rect->h = h;
    return rect;
}