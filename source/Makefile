GCC = gcc


FLAGS = -ansi -pedantic -Wall -lm 
FLAGSC = -Wall -lm 
FLAGM = -lm

MODULE1 = utils
MODULE2 = taller_lib

PROG = ./main

main:
	$(GCC) $(FLAGSC) -c $(MODULE2).c $(MODULE1).c 
	$(GCC) $(FLAGSC) -c $@.c
	$(GCC) $(FLAGS) -o $@ $@.o $(MODULE2).o $(MODULE1).o $(FLAGM)
	$(RM) *.o

clear:
	$(RM) main *.o

clean:
	$(RM) *.o
