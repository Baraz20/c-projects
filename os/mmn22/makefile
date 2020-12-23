CPARAMS = -Wall -ansi -pedantic

mymat.out : mymat.o mat.o 
	gcc $(CPARAMS) mymat.o mat.o -o mymat.out

mymat.o : mymat.c mat.h
	gcc $(CPARAMS) -c mymat.c  

mat.o : mat.c mat.h
	gcc $(CPARAMS) -c mat.c 

clean:
	rm mat.o mymat.o mymat.out 