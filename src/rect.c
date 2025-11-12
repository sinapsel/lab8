#include "rect.h"

static void rect_draw(const shape_t *shape)
{
    const rect_t *rect = (const rect_t *)shape;
    printf("Rect at (%d, %d), W=%d, H=%d\n",
           rect->base.x, rect->base.y, rect->w, rect->h);
}

rect_t *rect_create(int x, int y, int w, int h)
{
    rect_t *rect = (rect_t *)malloc(sizeof(rect_t));
    rect->base.x = x;
    rect->base.y = y;
    rect->base.draw = rect_draw;
    rect->w = w;
    rect->h = h;
    return rect;
}