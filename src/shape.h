#pragma once

#include <stdlib.h>

typedef struct Shape
{
    int x, y;
} shape_t;

void move(shape_t *c, int x, int y);