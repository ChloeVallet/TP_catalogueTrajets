/*************************************************************************
                           TCollection  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <TCollection> (fichier TCollection.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TCollection.h"
#include "Collection.h"
#include "../Trajet/Trajet.h"
#include "../TrajetSimple/TrajetSimple.h"
#include "../TrajetCompose/TrajetCompose.h"

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
    Collection collection;
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
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
    Collection collection(5);
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 5" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
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
    Collection collection(0);
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 0" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
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
    Collection collection(12);
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 12" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
    cout << endl;
} //----- fin de testConstructeur4


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
} //----- fin de testConstructeur

static void testAjuster1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajuster 1       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(5);
    collection.Ajuster(0);
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 5" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
    cout << endl;
} //----- fin de testAjuster1

static void testAjuster2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajuster 2       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(5);
    collection.Ajuster(2);
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 7" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
    cout << endl;
} //----- fin de testAjuster2

static void testAjuster3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajuster 3       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(0);
    collection.Ajuster(1);
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 1" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();
    cout << endl;
} //----- fin de testAjuster3

static void testAjuster()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testAjuster1();
    testAjuster2();
    testAjuster3();
} //----- fin de testAjuster

static void testAjouter1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajouter 1       " << endl;
    cout << "----------------------------" << endl;
    Collection collection;

    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AVION));
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 1" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet : " << endl << "{" << endl;
    cout << "   0 : Ville de départ : Lyon, ville d'arrivée : Marseille, transport : avion" << endl;
    cout << "}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();

    cout << endl;
} //----- fin de testAjouter1

static void testAjouter2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajouter 2       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(0);
    collection.Ajouter( new TrajetSimple("Lyon", "Marseille", AVION));
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 1" << endl;
    cout << "Taille max : 1" << endl;
    cout << "Tableau de trajet : " << endl << "{" << endl;
    cout << "   0 : Ville de départ : Lyon, ville d'arrivée : Marseille, transport : avion" << endl;
    cout << "}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();

    cout << endl;
} //----- fin de testAjouter2

static void testAjouter3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajouter 3       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(1);

    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AVION));
    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AVION));
    collection.Ajouter(new TrajetSimple("Paris", "Bordeaux", AUTO));
    collection.Ajouter(new TrajetSimple());
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 3" << endl;
    cout << "Taille max : 3" << endl;
    cout << "Tableau de trajet : " << endl << "{" << endl;
    cout << "   0 : Ville de départ : Lyon, ville d'arrivée : Marseille, transport : avion" << endl;
    cout << "   1 : Ville de départ : Lyon, ville d'arrivée : Marseille, transport : avion" << endl;
    cout << "   2 : Ville de départ : Paris, ville d'arrivée : Bordeaux, transport : voiture" << endl;
    cout << "}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();

    cout << endl;
} //----- fin de testAjouter3

static void testAjouter4()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajouter 4       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(5);

    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AVION));
    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AVION));
    collection.Ajouter(new TrajetSimple());
    collection.Ajouter(new TrajetSimple("Paris", "Bordeaux", AUTO));
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 3" << endl;
    cout << "Taille max : 5" << endl;
    cout << "Tableau de trajet : " << endl << "{" << endl;
    cout << "   0 : Ville de départ : Lyon, ville d'arrivée : Marseille, transport : avion" << endl;
    cout << "   1 : Ville de départ : Lyon, ville d'arrivée : Marseille, transport : avion" << endl;
    cout << "   2 : Ville de départ : Paris, ville d'arrivée : Bordeaux, transport : voiture" << endl;
    cout << "}" << endl;
    cout << "Résultat obtenu : " << endl;;
    collection.Afficher();

    cout << endl;
} //----- fin de testAjouter4

static void testAjouter5()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test ajouter 5       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(0);

    collection.Ajouter(new TrajetSimple("", "Marseille", AVION));
    collection.Ajouter(new TrajetSimple("Lyon", "", AVION));
    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AUTRE));
    collection.Ajouter(new TrajetSimple("", "", AVION));
    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 0" << endl;
    cout << "Taille max : 0" << endl;
    cout << "Tableau de trajet : " << endl << "{}" << endl;
    cout << "Résultat obtenu : " << endl;
    collection.Afficher();

    cout << endl;
} //----- fin de testAjouter5

static void testAjouter()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testAjouter1();
    testAjouter2();
    testAjouter3();
    testAjouter4();
    testAjouter5();
} //----- fin de testAjouter

static void testEstVide1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test estVide 1       " << endl;
    cout << "----------------------------" << endl;
    Collection collection;
    cout << "Résultat attendu : 1" << endl;
    cout << "Résultat obtenu : " << collection.EstVide() << endl;
    cout << endl;
} //----- fin de testEstVide1

static void testEstVide2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test estVide 2       " << endl;
    cout << "----------------------------" << endl;
    Collection collection;
    collection.Ajouter(new TrajetSimple("Lyon", "Marseille", AVION));
    cout << "Résultat attendu : 0" << endl;
    cout << "Résultat obtenu : " << collection.EstVide() << endl;
    collection.EstVide();

    cout << endl;
} //----- fin de testEstVide2

static void testEstVide3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "       Test estVide 3       " << endl;
    cout << "----------------------------" << endl;
    Collection collection(0);
    TrajetSimple * tSimple1 = new TrajetSimple("", "Marseille", AVION);
    TrajetSimple * tSimple2 = new TrajetSimple("Lyon", "", AVION);
    TrajetSimple * tSimple3 = new TrajetSimple("Lyon", "Marseille", AUTRE);
    TrajetSimple * tSimple4 = new TrajetSimple("", "", AVION);
    collection.Ajouter((Trajet*)tSimple1);
    collection.Ajouter((Trajet*)tSimple2);
    collection.Ajouter((Trajet*)tSimple3);
    collection.Ajouter((Trajet*)tSimple4);
    cout << "Résultat attendu : 1" << endl;
    cout << "Résultat obtenu : " << collection.EstVide() << endl;

    cout << endl;
} //----- fin de testEstVide3

static void testEstVide()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testEstVide1();
    testEstVide2();
    testEstVide3();
} //----- fin de testEstVide

static void testDernierElement1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "   Test dernierElement 1    " << endl;
    cout << "----------------------------" << endl;
    Collection collection(0);
    TrajetSimple * tSimple1 = new TrajetSimple("Lyon", "Marseille", BATEAU);
    TrajetSimple * tSimple2 = new TrajetSimple("Paris", "Bordeaux", AVION);
    TrajetSimple * tSimple3 = new TrajetSimple();
    collection.Ajouter((Trajet*)tSimple1);
    collection.Ajouter((Trajet*)tSimple2);
    collection.Ajouter((Trajet*)tSimple3);
    cout << "Résultat attendu : Ville de départ: Paris, ville d'arrivée: Bordeaux, transport : avion" << endl;
    cout << "Résultat obtenu : " ;
    if(!collection.EstVide())
    {
        collection.DernierElement()->Afficher();
    }

    cout << endl;
} //----- fin de testDernierElement1

static void testDernierElement2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "   Test dernierElement 2    " << endl;
    cout << "----------------------------" << endl;
    Collection collection(0);
    TrajetSimple * tSimple1 = new TrajetSimple("", "Marseille", BATEAU);
    collection.Ajouter((Trajet*)tSimple1);
    cout << "Résultat attendu : " << endl;
    cout << "Résultat obtenu : " ;
    if(!collection.EstVide())
    {
        collection.DernierElement()->Afficher();
    }
    cout << endl;
} //----- fin de testDernierElement2

static void testDernierElement3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "   Test dernierElement 3    " << endl;
    cout << "----------------------------" << endl;
    Collection collection(3);
    TrajetSimple * tSimple1 = new TrajetSimple("", "Marseille", BATEAU);
    collection.Ajouter((Trajet*)tSimple1);
    cout << "Résultat attendu : " << endl;
    cout << "Résultat obtenu : " ;
    if(!collection.EstVide())
    {
        collection.DernierElement()->Afficher();
    }
    cout << endl;
} //----- fin de testDernierElement3

static void testDernierElement4()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "   Test dernierElement 4    " << endl;
    cout << "----------------------------" << endl;
    Collection collection(3);
    TrajetSimple * tSimple1 = new TrajetSimple("Lyon", "Marseille", BATEAU);
    TrajetSimple * tSimple2 = new TrajetSimple("Paris", "Bordeaux", AVION);
    collection.Ajouter((Trajet*)tSimple1);
    collection.Ajouter((Trajet*)tSimple2);
    cout << "Résultat attendu : Ville de départ: Paris, ville d'arrivée: Bordeaux, transport : avion" << endl;
    cout << "Résultat obtenu : " ;
    if(!collection.EstVide())
    {
        collection.DernierElement()->Afficher();
    }

    cout << endl;
} //----- fin de testDernierElement4

static void testDernierElement()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testDernierElement1();
    testDernierElement2();
    testDernierElement3();
    testDernierElement4();
} //----- fin de testDernierElement

static void testAjoutTrajetCompose1()
{
    cout << "---------------------------------" << endl;
    cout << "   Test ajouter trajetCompose1   " << endl;
    cout << "---------------------------------" << endl;
    Collection collection;

    TrajetCompose* tCompose = new TrajetCompose("LYON", "MARSEILLE",2);
    tCompose->Ajouter(new TrajetSimple("NANTES","LYON",AUTO));
    tCompose->Ajouter(new TrajetSimple("LYON","AJACCIO",AUTO));
    tCompose->Ajouter(new TrajetSimple("NANTES","MARSEILLE",AUTO));


    TrajetCompose* tCompose2 = new TrajetCompose("LYON", "MARSEILLE",2);
    tCompose2->Ajouter(new TrajetSimple("NANTES","LYON",AUTO));
    tCompose2->Ajouter(new TrajetSimple("LYON","AJACCIO",AUTO));
    tCompose2->Ajouter(new TrajetSimple("AJACCIO","MARSEILLE",AUTO));


    collection.Ajouter(tCompose);
    collection.Ajouter(tCompose2);

    cout << "Résultat attendu :" << endl;
    cout << "Taille courante : 1" << endl;
    cout << "Taille max : 10" << endl;
    cout << "Tableau de trajet : " << endl << "{" << endl;
    cout << "\tVille de départ: LYON, ville d'arrivée: AJACCIO, transport : voiture" << endl;
    cout << "\tVille de départ: AJACCIO, ville d'arrivée: MARSEILLE, transport : voiture" << endl;
    cout << "}" << endl;
    cout << "Résultat obtenu : " << endl;
    collection.Afficher();

    cout << endl;

}
static void testAjoutTrajetCompose()
{
    testAjoutTrajetCompose1();
} //----- fin de testAjouterTrajetCompose


static void testRechercheBasique1()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "  Test RechercheBasique 1  " << endl;
    cout << "----------------------------" << endl;
    Collection collection(3);
    TrajetSimple * tSimple1 = new TrajetSimple("Lyon", "Marseille", BATEAU);
    TrajetSimple * tSimple2 = new TrajetSimple("Paris", "Bordeaux", AVION);
    TrajetSimple * tSimple3 = new TrajetSimple("Lyon", "Marseille", AUTO);
    TrajetSimple * tSimple4 = new TrajetSimple("Lyon", "Bordeaux", AVION);
    TrajetSimple * tSimple5 = new TrajetSimple("Paris", "Lyon", AVION);
    TrajetSimple * tSimple6 = new TrajetSimple("Paris", "Marseille", AUTO);
    TrajetSimple * tSimple7 = new TrajetSimple("Marseille", "Lyon", AVION);
    collection.Ajouter((Trajet*)tSimple1);
    collection.Ajouter((Trajet*)tSimple2);
    collection.Ajouter((Trajet*)tSimple3);
    collection.Ajouter((Trajet*)tSimple4);
    collection.Ajouter((Trajet*)tSimple5);
    collection.Ajouter((Trajet*)tSimple6);
    collection.Ajouter((Trajet*)tSimple7);
    cout << "Résultat attendu : " << endl;
    cout << "{ " << endl;
    cout << "   Ville de départ: Lyon, ville d'arrivée: Marseille, transport : bateau" << endl;
    cout << "   Ville de départ: Lyon, ville d'arrivée: Marseille, transport : voiture" << endl;
    cout << "Résultat obtenu : " << endl;
    collection.RechercheBasiqueDeTrajet("Lyon","Marseille");
    cout << endl;
} //----- fin de testRechercheBasique1

static void testRechercheBasique2()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "  Test RechercheBasique 2  " << endl;
    cout << "----------------------------" << endl;
    Collection collection(3);
    TrajetSimple * tSimple1 = new TrajetSimple("Lyon", "Marseille", BATEAU);
    TrajetSimple * tSimple2 = new TrajetSimple("Paris", "Bordeaux", AVION);
    TrajetSimple * tSimple3 = new TrajetSimple("Lyon", "Marseille", AUTO);
    TrajetSimple * tSimple4 = new TrajetSimple("Lyon", "Bordeaux", AVION);
    TrajetSimple * tSimple5 = new TrajetSimple("Paris", "Lyon", AVION);
    TrajetSimple * tSimple6 = new TrajetSimple("Paris", "Marseille", AUTO);
    TrajetSimple * tSimple7 = new TrajetSimple("Marseille", "Lyon", AVION);
    collection.Ajouter((Trajet*)tSimple1);
    collection.Ajouter((Trajet*)tSimple2);
    collection.Ajouter((Trajet*)tSimple3);
    collection.Ajouter((Trajet*)tSimple4);
    collection.Ajouter((Trajet*)tSimple5);
    collection.Ajouter((Trajet*)tSimple6);
    collection.Ajouter((Trajet*)tSimple7);
    cout << "Résultat attendu : " << endl;
    cout << "{ " << endl << "}" << endl;
    cout << "Résultat obtenu : " << endl;
    collection.RechercheBasiqueDeTrajet("Paris","Lille");
    cout << endl;
} //----- fin de testRechercheBasique2

static void testRechercheBasique3()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    cout << "----------------------------" << endl;
    cout << "  Test RechercheBasique 3  " << endl;
    cout << "----------------------------" << endl;
    Collection collection(3);
    TrajetSimple * tSimple1 = new TrajetSimple("Lyon", "Marseille", BATEAU);
    TrajetSimple * tSimple2 = new TrajetSimple("Paris", "Bordeaux", AVION);
    //AJOUTER DES TRAJETS COMPOSES
    collection.Ajouter((Trajet*)tSimple1);
    collection.Ajouter((Trajet*)tSimple2);
} //----- fin de testRechercheBasique3

static void testRechercheBasique()
// Mode d'emploi :
// Contrat :
// Algorithme :
//
{
    testRechercheBasique1();
    testRechercheBasique2();
} //----- fin de testDernierElement


//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ()
// Algorithme :
//
{
    testConstructeur();
    testAjouter();
    testAjuster();
    testEstVide();
    testDernierElement();
    testAjoutTrajetCompose();
    testRechercheBasique();
} //----- fin de main
