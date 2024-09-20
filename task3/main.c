/**
 * floor.c -- программа для расчета нужного этажа
 *
 * Copyright (c) 2024, Evgeny Stepukov <stepukov@cs.petrsu.ru>
 *
 * This code is licensed under MIT license.
 */

#include <stdio.h>

/* Проверяет, является ли number кандидатом в числа Лишрел */
int is_lychrel_candidate(long number);

/* Выводит все кандидаты в числа Лишрел из отрезка
   1, 2, ..., last_number */
void show_lychrel_candidates(long last_number);

/* Основная функция */
int main()
{
    /* Получаем значение верхней границы рассматриваемой последовательности N */
    long last_number;

    printf("Введите верхнюю границу отрезка поиска чисел Лишрел: ");
    scanf("%ld", &last_number);

    /* Выводим все кандидаты в числа Лишрел до last_number */
    show_lychrel_candidates(last_number);

    return 0;
}

/* Выводит все кандидаты в числа Лишрел из отрезка
   1, 2, ..., last_number */
void show_lychrel_candidates(long last_number)
{
    long number;

    /* Проверим каждое число в заданном отрезке: */
    for (number = 1; number <= last_number; number++) {
        /* Если оно является кандидатом в числа Лишрел, напечатаем его */
        if (is_lychrel_candidate(number)) {
            printf("%ld\n", number);
        }
    }
}

int is_lychrel_candidate(long number)
{
    return 1;
}
