main: main.o
	g++ -o main main.o

main.o: main.cpp funcs.o

funcs.o: funcs.cxx funcs.h

tests: tests.o
	g++ -o tests tests.o

tests.o: tests.cpp doctest.h funcs.o

clean:
	rm -f main tests main.o funcs.o tests.o
