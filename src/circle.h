#pragma once

#include "shape.h"

typedef struct Circle {
    shape_t base;
    int radius;
} circle_t;

circle_t *circle_create(int x, int y, int radius);