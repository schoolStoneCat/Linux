CCFLAGS = -Wall
CC = gcc

sumap: main.o sumap.o
	$(CC) main.o sumap.o -o sumap

main.o: main.c
	$(CC) main.c -c $(CCFLAGS)

sumap: sumap.c
	$(CC) sumap.c -c $(CCFLAGS)

.PHONY : clean
clean:
	rm -f sumap main.o sumap.o core *~
