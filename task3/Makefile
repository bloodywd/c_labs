# цель по умолчанию (при вызове make или make task3)
# собираем программу task3 из объектного файла task3.o
lychrel: lychrel.o
	gcc -g -O0 -o lychrel lychrel.o

lychrel.o: lychrel.c
	gcc -g -O0 -c lychrel.c

# цель clean (при вызове make clean)
# удаляем программу и объектные файлы
clean:
	rm lychrel *.o
indent:
	indent -kr -nut lychrel.c
