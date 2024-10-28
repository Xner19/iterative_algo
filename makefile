example1: example1.c
	g++ example1.c -o example1

example2: example2.c
	g++ example2.c -o example2

example3: example3.c
	g++ example3.c -o example3

example4: example4.c
	g++ example4.c -o example4

example5: example5.c
	g++ example5.c -o example5
clean:
	rm -f example1 example2 example3 example4 example5

