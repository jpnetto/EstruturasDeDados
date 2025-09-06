programa: main.o racional.o
	gcc -o programa main.o racional.o

main.o: main.c racional.h
	gcc -c main.c

racional.o: racional.c racional.h
	gcc -c racional.c

clean:
	rm -f *.o programa
