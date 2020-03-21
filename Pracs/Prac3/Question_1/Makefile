##
 # File: Makefile
 # File Created: Wednesday, 8th May 2019 11:12:45 am
 # Author: Jonathon Winter
 # -----
 # Last Modified: Wednesday, 8th May 2019 11:13:15 am
 # Modified By: Jonathon Winter
 # -----
 # Purpose: A Simple makefile to demonstrate Conditional Compilation
##


# Makefile Variables
CC		 = gcc
EXEC	 = program
CFLAGS = -Wall -ansi -pedantic
OBJ 	 = main.o

# Add FANCY to the CFLAGS and recompile the program
ifdef FANCY 
CFLAGS += -D FANCY
FANCY : clean $(EXEC)
endif

# Add DEBUG to the CFLAGS and recompile the program
ifdef DEBUG
CFLAGS += -D DEBUG
DEBUG : clean $(EXEC)
endif

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o : main.c
	$(CC) $(CFLAGS) main.c -c 

clean:
	rm -f $(EXEC) $(OBJ)
