#include "point.h"

typedef struct Point2
{
    float x, y;
} point2_t;

void psetx(point2_t *p, float x)
{
    if (x > 0)
        p->x = x;
}
float pgetx(point2_t *p)
{
    return p->x;
}
void psety(point2_t *p, float y)
{
    p->y = y;
}