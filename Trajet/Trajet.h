/***********************************************************************************
         Trajet  -  Classe abstraite permettant le polymophisme entre
            deux classes dérivées (TrajetSimple et TrajetComposé).
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
************************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées
#include <iostream>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
enum resultatComparaison {DEPARTS_EGAUX, ARRIVEES_EGALES, DEPARTS_ARRIVEES_EGAUX, DIFFERENTS};

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
//  Classe abstraite permettant le polymophisme entre
//  deux classes dérivées (TrajetSimple et TrajetComposé). Factorise les attributs communs à ces deux
//  classes filles (villeDepart et villeArrive)
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual bool EstValide() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool ProchainTrajetValidePossible( const Trajet & unTrajet ) const;
    // Mode d'emploi :
    // Méthode interessante dans la classe TrajetCompose pour verifier que
    // les différents trajets simples qui composent ce trajet composé sont
    // s'enchainent correctement (ville d'arrivée du précédent == ville de départ
    // du suivant)
    // Ce service n'a pas d'interet particulier pour un objet de type TrajetSimple
    // Contrat :
    //

    resultatComparaison Comparer (const Trajet & unTrajet) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    resultatComparaison Comparer (const char * depart, const char * arrivee) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur

    Trajet (const char* villeD = "-", const char* villeA = "-");
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual void Afficher() const = 0;
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //


    virtual ~Trajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    char* villeDepart;
    char* villeArrive;
};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // TRAJET_H

