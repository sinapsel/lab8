#include "circle.h"

circle_t *circle_create(int x, int y, int radius)
{
    circle_t *circle = malloc(sizeof(circle_t));
    circle->base.x = x;
    circle->base.y = y;
    circle->radius = radius;
    return circle;
}