# цель по умолчанию (при вызове make или make task2)
# собираем программу task2 из объектного файла task2.o
task2: main.o
	gcc -g -O0 -o task2 main.o

main.o: main.c
	gcc -g -O0 -c -Wall -Wextra -pedantic -pedantic-errors -std=c11 main.c

# цель clean (при вызове make clean)
# удаляем программу и объектные файлы
clean:
	rm task2 *.o
indent:
	indent -kr -nut main.c
