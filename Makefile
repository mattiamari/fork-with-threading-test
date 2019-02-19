all: test

test: test.c
	mkdir -p bin
	gcc -ansi -Wall -Werror -Wpedantic -o bin/test test.c -lpthread

clean:
	rm -f test
