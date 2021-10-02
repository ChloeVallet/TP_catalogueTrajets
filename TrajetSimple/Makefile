CC=g++
CFLAGS=-ansi -pedantic -Wall -std=c++11

TTrajetSimple: TTrajetSimple.o TrajetSimple.o
	$(CC) -o TTrajetSimple TTrajetSimple.o TrajetSimple.o $(CFLAGS)

TTrajetSimple.o: TTrajetSimple.cpp TTrajetSimple.h
	$(CC) -c TTrajetSimple.cpp

TrajetSimple.o: TrajetSimple.cpp TrajetSimple.h
	$(CC) -c TrajetSimple.cpp