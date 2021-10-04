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

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
bool Collection::Ajouter (Trajet * trajetAAjouter)
// Algorithme :
// Si la collection est pleine, on réajuste sa taille de 1 case supplémentaire
{
    if(trajetAAjouter->EstValide())
    {
        if(tailleCourante == tailleMax)
        {
            Ajuster(1);
        }
        trajets[tailleCourante] = trajetAAjouter;
        tailleCourante++;
        return true;
    }
    delete trajetAAjouter;
    return false;

}//----- Fin de Ajouter

unsigned int Collection::Ajuster (int delta)
// Algorithme :
//
{
    if(delta == 0) return tailleMax;
    int newtailleMax = tailleMax + delta;
    if(newtailleMax > tailleCourante)
    {
        tailleMax = (unsigned int) newtailleMax;
    }
    else
    {
        tailleMax = tailleCourante;
    }
    Trajet ** newCollectionTrajets = new Trajet * [ tailleMax ];
    for (int i = 0; i < tailleCourante; i++)
    {
        newCollectionTrajets[i] = trajets[i];
    }
    delete [] trajets;
    trajets = newCollectionTrajets;
    return tailleMax;
}//----- Fin de Ajuster

void Collection::Afficher() const
// Algorithme :
//
{
    cout << "Taille courante : " << tailleCourante << endl;
    cout << "Taille max : " << tailleMax << endl;
    cout << "Tableau de trajets :" << endl;
    cout << "{";
    for (int i = 0; i < tailleCourante; ++i) {
        if(i == 0){
            cout << endl;
        }
        cout << "   " << i << " : ";
        trajets[i]->Afficher();
    }
    cout << "}" << endl;
}//----- Fin de Afficher

bool Collection::EstVide() const
// Algorithme :
//
{
    if(tailleCourante == 0){
        return true;
    }
    return false;
}//----- Fin de EstVide

Trajet * Collection::DernierElement() const
// Algorithme :
//
{
    return trajets[tailleCourante - 1];
}//----- Fin de DernierElement

void Collection::RechercheBasiqueDeTrajet( const char * depart, const char * arrivee) const
// Algorithme :
//
{
    cout << "{" << endl;
    for (int i = 0; i < tailleCourante; ++i) {
        if((trajets[i]->Comparer(depart, arrivee)) == DEPARTS_ARRIVEES_EGAUX)
        {
            cout << "   ";
            trajets[i]->Afficher();
        }
    }
    cout << "}" << endl;

} //----- Fin de RechercheBasiqueDeTrajet

//-------------------------------------------- Constructeurs - destructeur

Collection::Collection ( unsigned int tailleMaxInitiale )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Collection>" << endl;
#endif
    tailleCourante = 0;
    tailleMax = tailleMaxInitiale;
    trajets = new Trajet * [ tailleMax ];
} //----- Fin de Collection


Collection::~Collection ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Collection>" << endl;
#endif
    for (int i = 0; i < tailleCourante; ++i) {
        delete trajets[i];
    }
    delete [] trajets;
} //----- Fin de ~Collection


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
