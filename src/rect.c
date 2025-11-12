#include "rect.h"

rect_t *rect_create(int x, int y, int w, int h)
{
    rect_t *rect = (rect_t*)malloc(sizeof(rect_t));
    rect->base.x = x;
    rect->base.y = y;
    rect->w = w;
    rect->h = h;
    return rect;
}