run: build
	./main.o

build: linked_list.c
	gcc -std=c99 main.c -o main.o
