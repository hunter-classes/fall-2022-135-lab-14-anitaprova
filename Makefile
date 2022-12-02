main.o: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp

funcs.o: funcs.cpp funcs.h

tests: tests.o 
	g++ -o tests tests.o

tests.o: tests.cpp 

clean:
	rm -f main tests main.o funcs.o tests.o
