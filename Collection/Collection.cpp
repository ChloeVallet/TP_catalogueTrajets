/********************************************************************************
                           Collection  -  description
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
*********************************************************************************/

//--- Réalisation de la classe <Collection> (fichier Collection.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Collection.h"
#include "../Trajet/Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Collection::Ajouter (Trajet * trajetAAjouter)
// Algorithme :
//Si la collection est pleine, on réajuste sa taille de 1 case supplémentaire
{
    if(tailleCourante == tailleMax)
    {
        Ajuster(1);
    }
    trajets[tailleCourante] = trajetAAjouter;
    tailleCourante++;
}//----- Fin de Ajouter

unsigned int Collection::Ajuster (int delta)
// Algorithme :
{
    if(delta == 0) return tailleMax;
    int newtailleMax = tailleMax + delta;
    if(newtailleMax > tailleCourante)
    {
        tailleMax = (unsigned int) newtailleMax;
    }
    else
    {
        tailleMax = tailleCourante; // Au plus juste si l'ajustement n'est pas fait dans le cadre d'un ajout
    }
    Trajet * newCollectionTrajets = new Trajet [ tailleMax ];
    for (int i = 0; i < tailleCourante; i++)
    {
        newCollectionTrajets[i] = trajets[i];
    }
    delete [] trajets;
    trajets = newCollectionTrajets;
    return tailleMax;
}//----- Fin de Ajuster


//-------------------------------------------- Constructeurs - destructeur
Collection::Collection ( unsigned int tailleMaxInitiale );
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Collection>" << endl;
#endif
    tailleCourante = 0;
    tailleMax = tailleMaxInitiale;
    trajets = new Trajet [ tailleMax ];
} //----- Fin de Collection


Collection::~Collection ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Collection>" << endl;
#endif
    delete [ ] trajets;
} //----- Fin de ~Collection


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
