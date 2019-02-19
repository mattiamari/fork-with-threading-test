all: test

test: test.c
	gcc -ansi -Wall -Werror -Wpedantic -o test test.c

clean:
	rm -f test