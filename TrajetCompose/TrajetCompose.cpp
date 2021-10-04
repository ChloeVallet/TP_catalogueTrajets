/**********************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
**********************************************************************************/

//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
bool TrajetCompose::EstValide() const
// Algorithme :
//
{
    if(trajetsSimple->EstVide())
    {
        return Trajet::EstValide();

    }
    else
    {
        if(Comparer(*(trajetsSimple->DernierElement())) == ARRIVEES_EGALES)
        {
            return true;
        }
    }
    return false;
} //----- Fin de EstValide


bool TrajetCompose::Ajouter(Trajet* trajetAAjouter)
// Algorithme :
// On ne peut ajouter que des trajets qui s'enchainent
{
    if(!Trajet::EstValide())
    {
        delete trajetAAjouter;
        return false;
    }
    else{
        if(trajetsSimple->EstVide()){
            if(Comparer(*(trajetAAjouter)) == DEPARTS_EGAUX){
                if(trajetsSimple->Ajouter(trajetAAjouter)){
                    return true;
                }
                delete trajetAAjouter;
                return false;
            }
            delete trajetAAjouter;
            return false;
        }
        else
        {
            if(trajetsSimple->DernierElement()->ProchainTrajetValidePossible(*(trajetAAjouter))){
                if(trajetsSimple->Ajouter(trajetAAjouter)){
                    return true;
                }
                delete trajetAAjouter;
                return false;
            }
            delete trajetAAjouter;
            return false;
        }
    }
} //----- Fin de Ajouter

void TrajetCompose::Afficher() const
// Algorithme :
//
{
    trajetsSimple->Afficher();
} //----- Fin de Afficher


//-------------------------------------------- Constructeurs - destructeur

TrajetCompose::TrajetCompose (const char* villeD , const char* villeA, unsigned int unTailleMax)
// Algorithme :
//
:Trajet(villeD,villeA)
{
    trajetsSimple = new Collection(unTailleMax);
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
{
    delete trajetsSimple;
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


