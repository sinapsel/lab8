#pragma once

#include "shape.h"

typedef struct Rect
{
    shape_t base;
    int w, h;
} rect_t;

rect_t *rect_create(int x, int y, int w, int h);