/**
 * golach.c -- программа "Гипотеза Гольдбаха"
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
    int m;

    /* Получаем нижнюю и верхнюю границу, для которых будем проверять гипотезу */
    printf
        ("Введите нижнюю и верхнюю границу промежутка: ");
    scanf("%d %d", &n, &m);

    /* Выделяем в куче динамическую память */
    int *primes = (int *) malloc((m + 1) * sizeof(int));

    /* Проверка выделения */
    if (primes == NULL) {
        fprintf(stderr, "Недостаточно памяти.\n");
        exit(EXIT_FAILURE);
    }

    /* Находим все простые числа до верхней границы */
    calculate_primes(primes, m);

    while (n <= m) {
        /* Вводим переменную, которая будет считать количество вариантов разложений */
        int counts = 0;

        /* Вводим переменную, которая запомнит значение x из первого разложения */
        int bottom_x;

        for (int i = 2; i <= n / 2; i++) {

            /* Если число является суммой двух простых чисел, то увеличиваем счетчик */
            if (primes[i] && primes[n - i]) {
                counts++;

                /* Если это первое разложение, то запоминаем x */
                if (counts == 1)
                    bottom_x = i;
            }
        }
        printf("%d %d %d %d\n", n, counts, bottom_x, n - bottom_x);
        n += 2;
    }

    /* Освобождаем память */
    free(primes);
    return 0;
}
