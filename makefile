all: classes.o
	gcc -o out classes.o

main.o: classes.c
	gcc -c classes.c

run:
	./out

clean:
	rm *.o
