
#pragma once
#include <stdlib.h>

/**
 * @brief Точка на двумерной плоскости
 * 
 */
typedef struct Point2 point2_t;

/**
 * @brief Конструктор точки
 * 
 * @return point2_t* возвращает указатель на новую точку или NULL
 * 
 * @note возвращает NULL
 */
point2_t* pnew();

/**
 * @brief Сеттер абсциссы точки
 * 
 * @param p указатель на точку
 * @param x новое значение абсциссы
 * 
 * @bug не обрабатывается указатель на NULL
 */
void psetx(point2_t* p, int x);

/**
 * @brief Геттер абсциссы точки
 * 
 * @param p указатель на точку
 * @return int абсцисса точки
 * 
 * @bug не обрабатывается указатель на NULL
 * 
 */
int pgetx(point2_t* p);


/**
 * @brief Сеттер ордианты точки
 * 
 * @param p указатель на точку
 * @param x новое значение ордианты
 * 
 * @bug не обрабатывается указатель на NULL
 * 
 */
void psety(point2_t* p, int y);

/**
 * @brief Геттер ординаты точки
 * 
 * @param p указатель на точку
 * @return int ордината точки
 * 
 * @bug не обрабатывается указатель на NULL
 * 
 */
int pgety(point2_t* p);

/**
 * @brief Деструктор точки
 * 
 * @param p указатель на точку
 */
void pfree(point2_t *p);