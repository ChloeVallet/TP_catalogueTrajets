/*************************************************************************
                           TTrajetCompose -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <TTrajetCompose> (fichier TTrajetCompose.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TTrajetCompose.h"
#include "TrajetCompose.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
static void testAjouter1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test AJOUTER 1          " << endl;
    cout << "----------------------------" << endl;
    TrajetCompose tCompose;
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}"<<endl;
    cout << "Résultat obtenu : " << endl;
    tCompose.Afficher();
    cout << endl;
} //----- fin de testConstructeur1

static void testAjouter2()
{
    cout << "----------------------------" << endl;
    cout << "    Test AJOUTER 2     " << endl;
    cout << "----------------------------" << endl;
    TrajetCompose* tCompose = new TrajetCompose("LYON", "MARSEILLE",2);
    tCompose->Ajouter(new TrajetSimple("LYON","NANTES",AUTO));
    tCompose->Ajouter(new TrajetSimple("NANTES","MARSEILLE",AUTO));

    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 2" << endl;
    cout << "Taille max : 2" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{" << endl;
    cout << "Ville de départ: LYON, ville d'arrivée: NANTES, transport : voiture" << endl;
    cout << "Ville de départ: NANTES, ville d'arrivée: MARSEILLE, transport : voiture" << endl;
    cout << "}"<<endl;
    cout << "Résultat obtenu : " << endl;
    tCompose->Afficher();
    cout << endl;

    delete tCompose;


} //----- fin de testConstructeur2

static void testAjouter3()
{
    cout << "----------------------------" << endl;
    cout << "    Test AJOUTER 3          " << endl;
    cout << "----------------------------" << endl;
    TrajetCompose* tCompose = new TrajetCompose("LYON", "MARSEILLE",2);
    tCompose->Ajouter(new TrajetSimple("NANTES","LYON",AUTO));
    tCompose->Ajouter(new TrajetSimple("LYON","AJACCIO",AUTO));
    tCompose->Ajouter(new TrajetSimple("NANTES","MARSEILLE",AUTO));

    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 2" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}" << endl;
    /*cout << "Ville de départ: LYON, ville d'arrivée: NANTES, transport : voiture" << endl;
    cout << "Ville de départ: NANTES, ville d'arrivée: MARSEILLE, transport : voiture" << endl;*/
    cout << "Résultat obtenu : " << endl;
    tCompose->Afficher();
    cout << endl;

    delete tCompose;


} //----- fin de testConstructeur3

static void testConstructeur1()
{
    TrajetCompose tc("LYON", "MARSEILLE",2);

    TrajetCompose tc1;

    TrajetCompose tc2("LYON", "MARSEILLE",15);

    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 2" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}" << endl;
    cout << "Résultat obtenu : " << endl;
    tc.Afficher();

    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}" << endl;
    cout << "Résultat obtenu : " << endl;
    tc1.Afficher();


    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 15" << endl;
    cout << "Tableau de trajet :" << endl;
    cout << "{}" << endl;
    cout << "Résultat obtenu : " << endl;
    tc2.Afficher();




}

static void testConstructeur()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testConstructeur1();
    /*testConstructeur2();
    testConstructeur3();*/

} //----- fin de testConstructeur


static void testAjouter()
{
    testAjouter1();
    testAjouter2();
    testAjouter3();

} //---- fin de testAjouter


//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ()
// Algorithme :
//
{
    testConstructeur();
    testAjouter();
} //----- fin de main