CCFLAGS = -Wall
CC = gcc

hello: hello.o main.o
	$(CC) hello.o main.o -o

main.o: main.c
	$(CC) main.c -c $(CCFLAGS)

hello.o: hello.c
	$(CC) hello.c -c $(CCFLAGS)
