# цель по умолчанию (при вызове make или make task3)
# собираем программу task3 из объектного файла task3.o
task3: main.o
	gcc -g -O0 -o task3 main.o

main.o: main.c
	gcc -g -O0 -c main.c

# цель clean (при вызове make clean)
# удаляем программу и объектные файлы
clean:
	rm task3 *.o
indent:
	indent -kr -nut main.c
