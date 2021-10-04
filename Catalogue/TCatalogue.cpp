/*************************************************************************
                           TCatalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <TCatalogue> (fichier TCatalogue.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TCatalogue.h"
#include "Catalogue.h"
#include "../TrajetCompose/TrajetCompose.h"
#include "../TrajetSimple/TrajetSimple.h"
#include "../Trajet/Trajet.h"
///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

static void testConstructeur1()
{
    cout << "----------------------------" << endl;
    cout << "    Test CONSTRUCTEUR 1     " << endl;
    cout << "----------------------------" << endl;


    Catalogue catalogue;

    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}"<<endl;
    cout << "Résultat obtenu : " << endl;
    catalogue.Afficher();
}


static void testConstructeur()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testConstructeur1();
} //----- fin de testConstructeur

static void testAjouter1()
{
    cout << "----------------------------" << endl;
    cout << "      Test AJOUTER 1        " << endl;
    cout << "----------------------------" << endl;

    Catalogue catalogue;
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}"<<endl;
    cout << "Résultat obtenu : " << endl;
    catalogue.Ajouter(new TrajetSimple()); //Ajout non valide car vide

    catalogue.Afficher();
}

static void testAjouter2()
{
    cout << "----------------------------" << endl;
    cout << "      Test AJOUTER 2        " << endl;
    cout << "----------------------------" << endl;

    Catalogue catalogue;
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 1" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{" << endl;
    cout << "\tVille de départ: LYON, ville d'arrivée: SAINT ETIENNE, transport : avion" << endl;
    cout << "}"<<endl;
    cout << "Résultat obtenu : " << endl;
    catalogue.Ajouter(new TrajetSimple("LYON","SAINT ETIENNE", AVION)); //Ajout non valide car vide

    catalogue.Afficher();
}

static void testAjouter3()
{
    cout << "----------------------------" << endl;
    cout << "      Test AJOUTER 3        " << endl;
    cout << "----------------------------" << endl;

    Catalogue catalogue;
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 1" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{" << endl;
    cout << "Taille courante : 2" << endl;
    cout << "Taille max : 2" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "Ville de départ: LYON, ville d'arrivée: SAINT ETIENNE" << endl;

    cout << "{" << endl;
    cout << "\tVille de départ: LYON, ville d'arrivée: NANTES, transport : voiture" << endl;
    cout << "\tVille de départ: NANTES, ville d'arrivée: SAINT ETIENNE, transport : voiture" << endl;
    cout << "}"<<endl;
    cout << "}"<<endl;
    cout << "Résultat obtenu : " << endl;


    TrajetCompose* tc = new TrajetCompose("LYON","SAINT ETIENNE", 2);
    tc->Ajouter(new TrajetSimple("LYON","NANTES",AUTO));
    tc->Ajouter(new TrajetSimple("NANTES","SAINT ETIENNE",AUTO));


    catalogue.Ajouter(tc); //Ajout non valide car vide

    catalogue.Afficher();
}


static void testAjouter()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testAjouter1();
    testAjouter2();
    testAjouter3();


} //----- fin de testAjouter

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ()
// Algorithme :
//
{
    testConstructeur();
    testAjouter();
} //----- fin de main