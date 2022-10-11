CC = gcc
CFLAGS = -Wall -g
LIBS =
INCLUDE = 
OBJS = main.o genfile.o wrapper.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)
.c.o:
	$(CC) -c $(CFLAGS) $*.c $(INCLUDE)

clean:
	rm $(OBJS) $(TARGET)

main.o: genfile.h
wrapper.o: wrapper.h
genfile.o: genfile.h wrapper.h