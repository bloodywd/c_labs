all: primes goldbach

primes: primes.o calculate_primes.o
	gcc -g -O0 -o primes primes.o calculate_primes.o

primes.o: primes.c
	gcc -g -O0 -c primes.c

goldbach: goldbach.o calculate_primes.o
	gcc -g -O0 -o goldbach goldbach.o calculate_primes.o

goldbach.o: goldbach.c
	gcc -g -O0 -c goldbach.c

calculate_primes.o: calculate_primes.c calculate_primes.h
	gcc -g -O0 -c calculate_primes.c

clean:
	rm primes goldbach *.o

indent:
	indent -kr -nut primes.c
	indent -kr -nut goldbach.c
