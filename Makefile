run: build
	./main.o

build: linked_list.c
	gcc main.c -o main.o
