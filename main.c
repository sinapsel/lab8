#include <stdio.h>

#include "point.h"
#include "shape.h"
#include "circle.h"
#include "rect.h"

/**
 * @brief Пример инкапсуляции
 * 
 */
void incapsulation_example() {
    point2_t *p = pnew();
    psetx(p, 2);
    // p->x = 2 // запрещено!
    printf("P(%d, %d)\n", pgetx(p), pgety(p));
}

/**
 * @brief Пример наследования
 * 
 */
void inheritance_example() {
    circle_t *c = circle_create(1, 1, 2);
    rect_t *r   = rect_create(1, 1, 2, 3);

    move((shape_t *)c, 2, 4);
    move((shape_t *)r, 3, -1);
}

void dyn_polymorphism_example() {
    circle_t *c = circle_create(1, 1, 2);
    rect_t *r   = rect_create(1, 1, 2, 3);

    draw((const shape_t *)c);
    draw((const shape_t *)r);
}

int main()
{

    incapsulation_example();
    inheritance_example();
    dyn_polymorphism_example();
    
}