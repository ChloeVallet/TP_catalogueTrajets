#include "Catalogue/Catalogue.h"
#include "Collection/Collection.h"
#include "Trajet/Trajet.h"
#include "TrajetSimple/TrajetSimple.h"
#include "TrajetCompose/TrajetCompose.h"

#include <iostream>

using namespace std;

static moyenTransport choisirMoyenTransport();
static TrajetSimple * creerTrajetSimple();
static TrajetCompose * creerTrajetCompose();
static void ajouterTrajet(Catalogue * catalogue);

int main() {

    int choixOptions;
    Catalogue catalogue;


    cout << "----------------------------------------------------------------" << endl;
    cout << "                     CATALOGUE DE TRAJETS                       " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Options :" << endl;
    cout << "1. Ajouter un nouveau trajet au catalogue" << endl;
    cout << "2. Consulter le catalogue" << endl;
    cout << "3. Rechercher un trajet dans le catalogue" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Saisissez votre choix : " << endl;
    cin >> choixOptions;
    cout << "----------------------------------------------------------------" << endl;

    switch (choixOptions) {
        case 1:
            ajouterTrajet(&catalogue);
            break;
        case 2:
            catalogue.Afficher();
            break;
    }
    return 0;
}

static moyenTransport choisirMoyenTransport() {
    int moyenTransport;
    cout << "Moyen de transport : " << endl;;
    cout << "1. AUTO" << endl;;
    cout << "2. BATEAU" << endl;;
    cout << "3. AVION" << endl;;
    cout << "4. TRAIN" << endl;;
    cin >> moyenTransport;
    switch (moyenTransport) {
        case 1:
            return AUTO;
        case 2:
            return BATEAU;
        case 3:
            return AVION;
        case 4:
            return TRAIN;
        default:
            cout << "Erreur choisir un autre moyen de transport" << endl;
            choisirMoyenTransport();
            break;
    }
}

static  TrajetSimple * creerTrajetSimple() {
    char * villeDepart;
    char *  villeArrivee;
    moyenTransport transport;
    cout << "Ville de départ : " ;
    cin >> villeDepart;
    cout << endl;
    cout << "Ville de d'arrivée : " ;
    cin >> villeArrivee;
    transport = choisirMoyenTransport();
    TrajetSimple * tSimple = new TrajetSimple(villeDepart, villeArrivee, transport);
    return tSimple;
}

static TrajetCompose * creerTrajetCompose() {
    int nbTrajetSimples;
    cout << "Combien trajets simples composent le trajet composé à créer ?" << endl;
    cin >> nbTrajetSimples;
    TrajetCompose * tCompose = new TrajetCompose(nbTrajetSimples);
    for (int i = 0; i < nbTrajetSimples; ++i) {
        cout << "----------------------------------------------------------------" << endl;
        tCompose->Ajouter(creerTrajetSimple());
    }
    cout << "----------------------------------------------------------------" << endl;
    return tCompose;
}

static void ajouterTrajet(Catalogue * catalogue){
    int choixTypeTrajets;
    cout << "1. Ajouter un trajet simple" << endl;
    cout << "2. Ajouter un trajet composé" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Saisissez votre choix : " << endl;
    cin >> choixTypeTrajets;
    cout << "----------------------------------------------------------------" << endl;
    switch (choixTypeTrajets) {
        case 1:
            catalogue->Ajouter(creerTrajetSimple());
            break;
        case 2:
            catalogue->Ajouter(creerTrajetCompose());
            break;
    }
}