#include "calculate_primes.h"

void calculate_primes(char *primes, int n)
{
    /* 0 и 1 это не простые числа */
    primes[0] = 0;
    primes[1] = 0;

    /* Пока предположим что все числа от 2 до n - простые */
    for (int i = 2; i <= n; i++) {
        primes[i] = 1;
    }

    int i = 2;

    /* Проверять будем от 2 до квадратного корня от n */
    while (i * i <= n) {

        /* Находим первое простое число промежутка */
        if (primes[i] == 1) {

            /* Помечаем, что все остальные числа в промежутке, которые делятся на i - не простые */
            for (int j = i * i; j <= n; j += i) {
                primes[j] = 0;
            }
        }
        i++;
    }
}

