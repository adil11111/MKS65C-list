all: list.o test.o
	gcc list.o test.o

run:
	./a.out

testing.o: test.c
	gcc -c test.c

list.o: list.c list.h
	gcc -c list.c

clean:
	rm *.o	
