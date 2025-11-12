# Информатика (Основы программирования)
## Занятие 8. Динамическая память. Принципы ООП. Работа с git и doxygen

### Документация

Оффлайн документация доступна в директории **doc/**
Онлайн документация доступна на [GitHub Pages](https://sinapsel.github.io/lab8/)

### Примеры

Примеры доступны в **main.c**

### Сборка с использованием CMake

#### Конфигурация
1. Режим отладки
```bash
cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
```
2. Режим с оптимизациями
```bash
cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build
```

#### Сборка
```bash
cmake  --build build -j4  
```