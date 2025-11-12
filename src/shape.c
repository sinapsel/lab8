#include "shape.h"

void move(shape_t *c, int x, int y)
{
    c->x = x;
    c->y = y;
}

void draw(const shape_t *c)
{
    c->draw(c);
}