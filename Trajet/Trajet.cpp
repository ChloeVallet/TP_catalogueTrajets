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
bool Trajet::EstValide () const
// Algorithme :
//
{
    if(strlen(villeDepart) == 0 || strlen(villeArrive) == 0)
    {
        return false;
    }
    else if(strcmp(villeDepart, "-") != 0 && strcmp(villeArrive,"-") != 0)
    {
        return true;
    }
    return false;

} //----- Fin de EstValide

bool Trajet::ProchainTrajetValidePossible(const Trajet & unTrajet) const
// Algorithme :
// On vérifie que unTrajet est un potentiel trajet suivant du trajet courant
// (enchainement possible du trajet courant avec unTrajet)
{
    if(unTrajet.EstValide() && EstValide()){
        if(strcmp(unTrajet.villeDepart, villeArrive) == 0){
            return true;
        }
        return false;
    }
    return false;
} //----- Fin de EstValide

resultatComparaison Trajet::Comparer (const Trajet & unTrajet) const
// Algorithme :
//
{
    if(strcmp(unTrajet.villeDepart, villeDepart) == 0 && strcmp(unTrajet.villeArrive, villeArrive) == 0)
    {
        return DEPARTS_ARRIVEES_EGAUX;
    }
    else if(strcmp(unTrajet.villeDepart, villeDepart) == 0)
    {
        return DEPARTS_EGAUX;
    }
    else if(strcmp(unTrajet.villeArrive, villeArrive) == 0)
    {
        return ARRIVEES_EGALES;
    }
    else
    {
        return DIFFERENTS;
    }
}//----- Fin de Comparer

resultatComparaison Trajet::Comparer (const char * depart, const char * arrivee) const
// Algorithme :
//
{
    if(strcmp(depart, villeDepart) == 0 && strcmp(arrivee, villeArrive) == 0)
    {
        return DEPARTS_ARRIVEES_EGAUX;
    }
    else if(strcmp(depart, villeDepart) == 0)
    {
        return DEPARTS_EGAUX;
    }
    else if(strcmp(arrivee, villeArrive) == 0)
    {
        return ARRIVEES_EGALES;
    }
    else
    {
        return DIFFERENTS;
    }
}//----- Fin de Comparer

//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet (const char* villeD , const char* villeA)
// Algorithme :
// Copie du paramètre villeD dans l'attribut villeDepart et idem pour villeArrive
{

    villeDepart = new char[strlen(villeD)+1];
    villeArrive = new char[strlen(villeA)+1];

    strcpy(villeDepart,villeD);
    strcpy(villeArrive, villeA);

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


