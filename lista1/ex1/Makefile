programa: main.o numI.o
	gcc -o programa main.o numI.o

main.o: main.c numI.h
	gcc -c main1.c

numI.o: numI.c numI.h
	gcc -c numI.c

clean:
	rm -f *.o programa
