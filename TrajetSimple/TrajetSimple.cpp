/*********************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
*********************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur
TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
:Trajet(unTrajetSimple)
{
    typeTransport = unTrajetSimple.typeTransport;

#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)


TrajetSimple::TrajetSimple (const char* villeD, const char* villeA, moyenTransport transport )
// Algorithme :
//
:Trajet(villeD, villeA)
{
    typeTransport = transport;
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple

void TrajetSimple::Afficher()
// Algorithme :
//
{
    cout << "Ville de départ: " << villeDepart << ", ville d'arrive: " << villeArrive;
    switch (typeTransport) {
        case AUTO :
            cout << "en voiture" << endl;
            break;
        case BATEAU :
            cout << "en bateau" << endl;
            break;
        case AVION :
            cout << "en avion" << endl;
            break;
        case TRAIN:
            cout << "en train" << endl;
            break;
    }
}//----- Fin de Afficher

TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
    //delete typeTransport;
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
