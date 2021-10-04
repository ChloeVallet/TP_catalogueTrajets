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
using namespace std;
#include <iostream>

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
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test constructeur 1     " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("Lyon", "Marseille",BATEAU);
    cout << "Résultat attendu : Ville de départ: Lyon, ville d'arrivée: Marseille, transport : bateau" << endl;
    cout << "Résultat obtenu : ";
    tSimple.Afficher();
    cout << endl;
} //----- fin de testConstructeur1

static void testConstructeur2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test constructeur 2     " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple;
    cout << "Résultat attendu : Ville de départ: -, ville d'arrivée: -, transport : autre" << endl;
    cout << "Résultat obtenu : ";
    tSimple.Afficher();
    cout << endl;
} //----- fin de testConstructeur2

static void testConstructeur3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test constructeur 3     " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("","",AVION);
    cout << "Résultat attendu : Ville de départ: , ville d'arrivée: , transport : avion" << endl;
    cout << "Résultat obtenu : ";
    tSimple.Afficher();
    cout << endl;
} //----- fin de testConstructeur3

static void testConstructeur4()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test constructeur 4     " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("","",AUTRE);
    cout << "Résultat attendu : Ville de départ: , ville d'arrivée: , transport : autre" << endl;
    cout << "Résultat obtenu : ";
    tSimple.Afficher();
    cout << endl;
} //----- fin de testConstructeur4

static void testConstructeur5()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test constructeur 5     " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("Lyon","",AUTRE);
    cout << "Résultat attendu : Ville de départ: Lyon , ville d'arrivée: , transport : autre" << endl;
    cout << "Résultat obtenu : ";
    tSimple.Afficher();
    cout << endl;
} //----- fin de testConstructeur5

static void testConstructeur6()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "    Test constructeur 6     " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("","Marseille",AUTRE);
    cout << "Résultat attendu : Ville de départ: , ville d'arrivée: Marseille , transport : autre" << endl;
    cout << "Résultat obtenu : ";
    tSimple.Afficher();
    cout << endl;
} //----- fin de testConstructeur6

static void testConstructeur()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testConstructeur1();
    testConstructeur2();
    testConstructeur3();
    testConstructeur4();
    testConstructeur5();
    testConstructeur6();
} //----- fin de testConstructeur

static void testEstValide1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 1      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple1("Lyon", "Marseille",BATEAU);
    cout << "Résultat attendu : 1" << endl;
    cout << "Résultat obtenu : " << tSimple1.EstValide() << endl;
} //----- fin de testEstValide1

static void testEstValide2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 2      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple1;
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.EstValide() << endl;
} //----- fin de testEstValide2

static void testEstValide3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 3      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple1("Lyon", "Marseille", AUTRE);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.EstValide() << endl;
} //----- fin de testEstValide3

static void testEstValide4()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 4      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("","",AUTRE);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple.EstValide() << endl;
} //----- fin de testEstValide4

static void testEstValide5()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 5      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("","",AVION);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple.EstValide() << endl;
} //----- fin de testEstValide5

static void testEstValide6()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 6      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("Lyon","",AUTRE);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple.EstValide() << endl;
} //----- fin de testEstValide6

static void testEstValide7()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "      Test EstValide 7      " << endl;
    cout << "----------------------------" << endl;
    TrajetSimple tSimple("","Marseille",AUTRE);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple.EstValide() << endl;
} //----- fin de testConstructeur6

static void testEstValide()
// Mode d'emploi :
// Contrat :
// Algorithme :
{
    testEstValide1();
    testEstValide2();
    testEstValide3();
    testEstValide4();
    testEstValide5();
    testEstValide6();
    testEstValide7();
} //----- fin de testEstValide

static void testProchainTrajetValidePossible1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValidePossible 1     " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Lyon","Marseille",AVION);
    TrajetSimple tSimple2("Marseille","Bordeaux",AUTO);
    cout << "Résultat attendu : 1" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible1

static void testProchainTrajetValidePossible2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 2    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Lyon","Marseille",AVION);
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible2

static void testProchainTrajetValidePossible3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 3    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible3

static void testProchainTrajetValidePossible4()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 4    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Lyon","Bordeaux",AUTRE);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible4

static void testProchainTrajetValidePossible5()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 5    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("","Bordeaux",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible5

static void testProchainTrajetValidePossible6()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 6    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Bastia","",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible6

static void testProchainTrajetValidePossible7()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 7    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("","",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple1.ProchainTrajetValidePossible(tSimple2) << endl;
} //----- fin de testProchainTrajetValidePossible7

static void testProchainTrajetValidePossible8()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 8    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple2.ProchainTrajetValidePossible(tSimple1) << endl;
} //----- fin de testProchainTrajetValidePossible3

static void testProchainTrajetValidePossible9()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 9    " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Lyon","Bordeaux",AUTRE);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple2.ProchainTrajetValidePossible(tSimple1) << endl;
} //----- fin de testProchainTrajetValidePossible9

static void testProchainTrajetValidePossible10()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 10   " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("","Bordeaux",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple2.ProchainTrajetValidePossible(tSimple1) << endl;
} //----- fin de testProchainTrajetValidePossible10

static void testProchainTrajetValidePossible11()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 11   " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Bastia","",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple2.ProchainTrajetValidePossible(tSimple1) << endl;
} //----- fin de testProchainTrajetValidePossible11

static void testProchainTrajetValidePossible12()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "  Test ProchainTrajetValide Possible 12   " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("","",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << tSimple2.ProchainTrajetValidePossible(tSimple1) << endl;
} //----- fin de testProchainTrajetValidePossible12

static void testProchainTrajetValidePossible()
// Mode d'emploi :
// Contrat :
// Algorithme :
{
    testProchainTrajetValidePossible1();
    testProchainTrajetValidePossible2();
    testProchainTrajetValidePossible3();
    testProchainTrajetValidePossible4();
    testProchainTrajetValidePossible5();
    testProchainTrajetValidePossible6();
    testProchainTrajetValidePossible7();
    testProchainTrajetValidePossible8();
    testProchainTrajetValidePossible9();
    testProchainTrajetValidePossible10();
    testProchainTrajetValidePossible11();
    testProchainTrajetValidePossible12();

} //----- fin de testProchainTrajetValidePossible

static void testComparer1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "             Test Comparer 1              " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Lyon","",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 0 (DEPARTS_EGAUX)" << endl;
    cout << "Résultat obtenu : " << tSimple1.Comparer(tSimple2) << endl;
} //----- fin de testComparer1

static void testComparer2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "             Test Comparer 2              " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("","Bordeaux",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 1 (ARRIVEES_EGALES)" << endl;
    cout << "Résultat obtenu : " << tSimple1.Comparer(tSimple2) << endl;
} //----- fin de testComparer2

static void testComparer3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "             Test Comparer 3              " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Lyon","Bordeaux",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 2 (DEPARTS_ARRIVEES_EGAUX)" << endl;
    cout << "Résultat obtenu : " << tSimple1.Comparer(tSimple2) << endl;
} //----- fin de testComparer3

static void testComparer4()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "------------------------------------------" << endl;
    cout << "             Test Comparer 4              " << endl;
    cout << "------------------------------------------" << endl;
    TrajetSimple tSimple1("Marseille","Paris",BATEAU);;
    TrajetSimple tSimple2("Lyon","Bordeaux",AUTO);
    cout << "Résultat attendu : 3 (DIFFERENTS)" << endl;
    cout << "Résultat obtenu : " << tSimple1.Comparer(tSimple2) << endl;
} //----- fin de testComparer4

static void testComparer()
// Mode d'emploi :
// Contrat :
// Algorithme :
{
    testComparer1();
    testComparer2();
    testComparer3();
    testComparer4();

} //----- fin de testProchainTrajetValidePossible

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ()
// Algorithme :
//
{
    testConstructeur();
    testEstValide();
    testProchainTrajetValidePossible();
    testComparer();
} //----- fin de main
