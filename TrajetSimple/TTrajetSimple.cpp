/*************************************************************************
                           TTrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <TTrajetSimple> (fichier TTrajetSimple.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "TTrajetSimple.h"
#include "TrajetSimple.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
static void testConstructeur1()
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
{
    char * villeDepart = (char*) "Lyon";
    char * villeArrivee = (char*) "Marseille";
    TrajetSimple tSimple(villeDepart, villeArrivee,BATEAU);
    tSimple.Afficher();
} //----- fin de testConstructeur1

static void testConstructeur2()
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
{
    TrajetSimple tSimple;
    tSimple.Afficher();
} //----- fin de testConstructeur1


static void testConstructeur()
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
{
    testConstructeur1();
    testConstructeur2();;
} //----- fin de testConstructeur

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ()
// Algorithme :
//
{
    testConstructeur();
} //----- fin de main
