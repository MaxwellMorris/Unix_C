##
 # File: Makefile
 # File Created:  Sat 04 Apr 2020 21:40:02 AWST
 # Author: Maxwell Morris
 # -----
 # -----
 # Purpose week 3 UCP Question 2 makefile
##


# Makefile compiler and flags
CC     =  gcc
EXEC   =  program
CFLAGS =  -Wall -ansi -pedantic
OBJ    =  numbers.o order.o user_input.o

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

order.o : order.c order.h
	$(CC) -c order.c $(CFLAGS)

user_input.o : user_input.c user_input.h order.h
	$(CC) -c user_input.c $(CFLAGS)

numbers.o : numbers.c order.h user_input.h
	$(CC) -c numbers.c $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJ)

