all: main.o
	gcc item.o main.o -Wall -std=c99 -o ex

main.o:
	gcc -c main.c

run:
	./ex

clear:
	rm main.o ./ex