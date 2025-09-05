programa: main.o conjunto.o
	gcc -o programa main.o conjunto.o

main.o: main.c conjunto.h
	gcc -c main1.c

conjunto.o: conjunto.c conjunto.h
	gcc -c conjunto.c

clean:
	rm -f *.o programa
