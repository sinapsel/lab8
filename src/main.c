#include <stdio.h>

#include "point.h"
#include "shape.h"
#include "circle.h"
#include "rect.h"

int main() {

    // инкапсуляция
    point2_t *p = pnew();
    psetx(p, 2);
    // p->

    printf("%g", pgetx(p));

    /// наследование
    circle_t* c = circle_create(1, 1, 2);
    rect_t* r = rect_create(1, 1, 2, 3);

    move((shape_t*)c, 2, 4);
    move((shape_t*)r, 3, -1);
}