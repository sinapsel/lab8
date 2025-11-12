
#pragma once
#include <stdlib.h>

typedef struct Point2 point2_t;

point2_t* pnew();
void psetx(point2_t* p, float x);
float pgetx(point2_t* p);
void psety(point2_t* p, float y);
float pgety(point2_t* p);