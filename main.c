#include <stdio.h>

#include "point.h"

int main() {

    // инкапсуляция
    point2_t *p = pnew();
    psetx(p, 2);
    // p->

    printf("%g", pgetx(p));
}