/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"
#include "../Collection/Collection.h"
#include "../Trajet/Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Catalogue::Ajouter(Trajet *trajetAAjouter)
// Algorithme :
//
{
    collectionTrajets.Ajouter(trajetAAjouter);
}   //----- Fin de Ajouter

void Catalogue::Afficher() const
// Algorithme :
//
{
    collectionTrajets.Afficher();
} //----- Fin de Afficher

void Catalogue::Rechercher(const char * depart, const char *arrivee) const {
    collectionTrajets.RechercheBasiqueDeTrajet(depart, arrivee);
} //----- Fin de Rechercher

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif
} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Catalogue>" << endl;
#endif
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
