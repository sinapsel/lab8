#include "point.h"

/**
 * @brief Точка на двумерной плоскости
 * 
 */
typedef struct Point2
{
    int x; ///< абсцисса точки
    int y; ///< абсцисса точки
} point2_t;


/**
 * @brief Конструктор точки
 * 
 * @return point2_t* возвращает указатель на новую точку или NULL
 * 
 * @note возвращает NULL
 */
point2_t* pnew() {
    point2_t* tmp = malloc(sizeof(*tmp));
    tmp->x = 0;
    tmp->y = 0;
    return tmp;
}

/**
 * @brief Сеттер абсциссы точки
 * 
 * @param p указатель на точку
 * @param x новое значение абсциссы
 * 
 * @bug не обрабатывается указатель на NULL
 */
void psetx(point2_t *p, int x)
{
    if (x > 0)
        p->x = x;
}

/**
 * @brief Геттер абсциссы точки
 * 
 * @param p указатель на точку
 * @return int абсцисса точки
 * 
 * @bug не обрабатывается указатель на NULL
 * 
 */
int pgetx(point2_t *p)
{
    return p->x;
}


/**
 * @brief Геттер ординаты точки
 * 
 * @param p указатель на точку
 * @return int ордината точки
 * 
 * @bug не обрабатывается указатель на NULL
 * 
 */
int pgety(point2_t *p)
{
    return p->y;
}

/**
 * @brief Сеттер ордианты точки
 * 
 * @param p указатель на точку
 * @param x новое значение ордианты
 * 
 * @bug не обрабатывается указатель на NULL
 * 
 */
void psety(point2_t *p, int y)
{
    p->y = y;
}