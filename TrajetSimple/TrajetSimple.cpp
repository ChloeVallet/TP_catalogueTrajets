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
bool TrajetSimple::EstValide() const{
#ifdef MAP
    cout << "Appel au constructeur de la méthode estValide de <TrajetSimple>" << endl;
#endif
    if(Trajet::EstValide() && typeTransport != AUTRE)
    {
        return true;
    }
    else
    {
        return false;
    }
} //----- Fin de EstValide

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple (const char* villeD, const char* villeA, moyenTransport transport)
// Algorithme :
//
: Trajet(villeD, villeA), typeTransport(transport)
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple

void TrajetSimple::Afficher() const
// Algorithme :
//
{
    cout << "Ville de départ: " << villeDepart << ", ville d'arrivée: " << villeArrive;
    switch (typeTransport) {
        case AUTO :
            cout << ", transport : voiture" << endl;
            break;
        case BATEAU :
            cout << ", transport : bateau" << endl;
            break;
        case AVION :
            cout << ", transport : avion" << endl;
            break;
        case TRAIN:
            cout << ", transport : train" << endl;
            break;
        default:
            cout << ", transport : autre" << endl;
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
