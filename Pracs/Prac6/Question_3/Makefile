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
CFLAGS =  -Wall -ansi -pedantic -g
OBJ    =  linkedlist.o main.o

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

linkedlist.o : LinkedList.h linkedlist.c
	$(CC) -c linkedlist.c $(CFLAGS)

linkedListTest.o : main.c LinkedList.h linkedlist.c
	$(CC) -c main.c $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJ)

