test: square.o main.o
	gcc square.o main.o -o main

square.o: file/square.c file/square.h
	gcc -c file/square.c

main.o: file/square.h main.c
	gcc -c main.c 
clean:
	rm -rf file/*.gch *.o

