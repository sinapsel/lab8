#pragma once

#include <stdio.h>
#include <stdlib.h>

struct Shape;

typedef void (*draw_func_t)(const struct Shape *);

typedef struct Shape
{
    int x, y;
    draw_func_t draw;
} shape_t;

void move(shape_t *c, int x, int y);

void draw(const shape_t *c);