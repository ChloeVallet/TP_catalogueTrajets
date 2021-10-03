CC=g++
CFLAGS=-ansi -pedantic -Wall -std=c++11

TTrajetSimple: TTrajetSimple.o TrajetSimple.o Trajet.o
	$(CC) -o TTrajetSimple TTrajetSimple.o TrajetSimple.o Trajet.o $(CFLAGS)

TTrajetSimple.o: TrajetSimple/TTrajetSimple.cpp TrajetSimple/TTrajetSimple.h
	$(CC) -c TrajetSimple/TTrajetSimple.cpp

TrajetSimple.o: TrajetSimple/TrajetSimple.cpp TrajetSimple/TrajetSimple.h
	$(CC) -c TrajetSimple/TrajetSimple.cpp

Trajet.o: Trajet/Trajet.cpp Trajet/Trajet.h
	$(CC) -c Trajet/Trajet.cpp