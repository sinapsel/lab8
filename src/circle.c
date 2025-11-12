#include "circle.h"

static void circle_draw(const shape_t *shape)
{
    const circle_t *circle = (const circle_t *)shape;
    printf("Circle at (%d, %d), R=%d\n",
           circle->base.x, circle->base.y, circle->radius);
}

circle_t *circle_create(int x, int y, int radius)
{
    circle_t *circle = malloc(sizeof(circle_t));
    circle->base.x = x;
    circle->base.y = y;
    circle->base.draw = circle_draw;
    circle->radius = radius;
    return circle;
}