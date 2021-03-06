CC=g++
CFLAGS=-ansi -pedantic -Wall -std=c++11


Application.exe : Catalogue.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o Application.o
	$(CC) -o Application.exe Catalogue.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o Application.o $(CFLAGS)

Application.o: Application/Application.cpp Application/Application.h
	$(CC) -c Application/Application.cpp


TTrajetSimple: TTrajetSimple.o TrajetSimple.o Trajet.o
	$(CC) -o TTrajetSimple TTrajetSimple.o TrajetSimple.o Trajet.o $(CFLAGS)

TTrajetSimple.o: TrajetSimple/TTrajetSimple.cpp TrajetSimple/TTrajetSimple.h
	$(CC) -c TrajetSimple/TTrajetSimple.cpp

TrajetSimple.o: TrajetSimple/TrajetSimple.cpp TrajetSimple/TrajetSimple.h
	$(CC) -c TrajetSimple/TrajetSimple.cpp



TTrajetCompose: TTrajetCompose.o TTrajetCompose.o Trajet.o TrajetSimple.o Collection.o
	$(CC) -o TTrajetCompose TTrajetCompose.o TrajetCompose.o Trajet.o TrajetSimple.o Collection.o $(CFLAGS)

TTrajetCompose.o: TrajetCompose/TTrajetCompose.cpp TrajetCompose/TTrajetCompose.h
	$(CC) -c TrajetCompose/TTrajetCompose.cpp

TrajetCompose.o: TrajetCompose/TrajetCompose.cpp TrajetCompose/TrajetCompose.h
	$(CC) -c TrajetCompose/TrajetCompose.cpp


TCollection: TCollection.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o
	$(CC) -o TCollection TCollection.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o $(CFLAGS)

TCollection.o: Collection/TCollection.cpp Collection/TCollection.h
	$(CC) -c Collection/TCollection.cpp

Collection.o: Collection/Collection.cpp Collection/Collection.h
	$(CC) -c Collection/Collection.cpp


TCatalogue: TCatalogue.o Catalogue.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o
	$(CC) -o TCatalogue TCatalogue.o Catalogue.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o $(CFLAGS)

TCatalogue.o: Catalogue/TCatalogue.cpp Catalogue/TCatalogue.h
	$(CC) -c Catalogue/TCatalogue.cpp

Catalogue.o: Catalogue/Catalogue.cpp Catalogue/Catalogue.h
	$(CC) -c Catalogue/Catalogue.cpp



Trajet.o: Trajet/Trajet.cpp Trajet/Trajet.h
	$(CC) -c Trajet/Trajet.cpp
