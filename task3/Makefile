# цель по умолчанию (при вызове make или make lychrel)
# собираем программу lychrel из объектного файла lychrel.o
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

.PHONY: clean indent
