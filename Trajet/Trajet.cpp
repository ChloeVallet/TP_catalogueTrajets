/********************************************************************************
                 Trajet  -    Définition des méthodes de la classe
                             -------------------
    début             : 30/09/2021
    copyright         : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail            : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
********************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode



//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( const Trajet & unTrajet )
// Algorithme :
//
{
    villeDepart = new char[strlen(unTrajet.villeDepart)+1];
    villeArrive = new char[strlen(unTrajet.villeArrive)+1];

    strcpy(villeDepart,unTrajet.villeDepart);
    strcpy(villeArrive, unTrajet.villeArrive);
#ifdef MAP
    cout << "Appel au constructeur de copie de <Trajet>" << endl;
#endif
} //----- Fin de Trajet (constructeur de copie)


Trajet::Trajet (const char* villeD, const char* villeA )
// Algorithme :
// Copie du paramètre villeD dans l'attribut villeDepart et idem pour villeArrive
{
    if(villeD != nullptr && villeA != nullptr)
    {
        villeDepart = new char[strlen(villeD)+1];
        villeArrive = new char[strlen(villeA)+1];

        strcpy(villeDepart,villeD);
        strcpy(villeArrive, villeA);

    }else
    {
        cout << "Une des deux villes n'est pas valides lors de l'appel au constructeur "
             << "de <Trajet> (pointeur null)"<<endl;
    }
#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif
} //----- Fin de Trajet


Trajet::~Trajet ( )
// Algorithme :
//
{
    delete [] villeArrive;
    delete [] villeDepart;
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


