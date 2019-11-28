
SHAREDOBJS=shared.o

prog1: prog1.o $(SHAREDOBJS)

prog2: prog2.o prog1.o $(SHAREDOBJS)

prog1.o: prog1.c

prog2.o: prog2.c

shared.o: shared.c

clean:
	rm *.o prog1 prog2
