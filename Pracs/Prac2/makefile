CC = gcc
CFLAGS = -Wall -ansi -pedantic
OBJ = powers2.o bounds3.o
EXEC = program

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

bounds3.o : bounds3.c macros.h
	$(CC) -c bounds3.c $(CFLAGS)

powers2.o : powers2.c
	$(CC) -c powers2.c $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJ)
