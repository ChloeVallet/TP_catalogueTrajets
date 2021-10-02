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
// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur
TrajetCompose::TrajetCompose ( const TrajetCompose & unTrajetCompose )
// Algorithme :
//
{
    trajetsSimple = new Collection(unTrajetCompose.trajetsSimple->tailleMax);
    trajetsSimple->tailleMax = unTrajetCompose.trajetsSimple->tailleMax;
    //trajetsSimple->tailleCourante = unTrajetCompose.trajetsSimple->tailleCourante;
    for(int i =0;i<tailleCourante;i++)
    {
        trajetsSimple->Ajouter(unTrajetCompose.trajetsSimple->trajets[i]);
    }


#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose (constructeur de copie)


TrajetCompose::TrajetCompose (unsigned int unTailleMax)
// Algorithme :
//
{
    trajetsSimple = new Collection(unTailleMax);
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose

bool TrajetCompose::estValide(Trajet *trajetAAjouter)
{
    if(strcmp(trajetsSimple->trajets[trajetsSimple->tailleCourante-1].villeArrive,trajetAAjouter->villeDepart) == 0)
    {
        return true;
    }else
    {
        return false;
    }
}

void TrajetCompose::Ajouter(Trajet *trajetAAjouter)
{
    if(estValide(trajetAAjouter))
    {
        trajetsSimple->Ajouter(trajetAAjouter);
    }else
    {
        cout << "Impossible d'ajouter ce trajet car non valide (ville d'arrive precedente et ville de depart de ce trajet) !" << endl;
    }
}

void TrajetCompose::Afficher()
{
    for(int i = 0;i<trajetsSimple->tailleCourante;i++)
    {
        trajetsSimple->trajets[i]->Afficher();
    }
}

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


