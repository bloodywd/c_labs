/**
 * primes.c -- программа "Простые числа"
 *
 * Copyright (c) 2024, Evgeny Stepukov <stepukov@cs.petrsu.ru>
 *
 * This code is licensed under MIT license.
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculate_primes.h"

/* Основная функция */
int main()
{
    int n;

    /* Получаем значение верхней границы последовательности */
    printf
        ("Введите последнее число промежутка, в котором будем искать простые числа: ");
    scanf("%d", &n);

    /* Выделяем в куче память для массива индикаторов */
    char *primes = (char *) malloc((n + 1) * sizeof(char));

    /* Заполняем массив индикаторов */
    calculate_primes(primes, n);

    /* Выводим на экран простые числа*/
    for (int i = 1; i <= n; i++) {
        if (primes[i])
            printf("%d\n", i);
    }

    /* Освобождаем динамическую память */
    free(primes);
    return 0;
}
