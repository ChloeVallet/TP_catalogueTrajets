/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

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

    /*villeDepart = new char[strlen(unTrajetSimple.villeDepart)+1];
    villeArrive = new char[strlen(unTrajetSimple.villeArrive)+1];*/
    typeTransport = new char[strlen(unTrajetSimple.typeTransport)+1];

    /*strcpy(villeDepart, unTrajetSimple.villeDepart);
    strcpy(villeArrive, unTrajetSimple.villeArrive);*/
    strcpy(typeTransport, unTrajetSimple.typeTransport);

#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)


TrajetSimple::TrajetSimple (char* villeD, char* villeA, char* moyenTransport )
// Algorithme :
//
:Trajet(villeD, villeA)
{
    if(moyenTransport != nullptr)
    {
        typeTransport = new char[strlen(moyenTransport)+1];
        strcpy(typeTransport, moyenTransport);
    }else
    {
        cout << "Moyen de transport non valide lors de l'appel au constrcteur "
        << "de <TrajetSimple> (pointeur null)"<<endl;
    }

#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple

void TrajetSimple::Afficher()
// Algorithme :
//
{
    cout << "Ville de départ: " << villeDepart << ", ville d'arrive: " << villeArrive
    << " via " << typeTransport << endl;
}//----- Fin de Afficher

TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
    delete [] typeTransport;
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
