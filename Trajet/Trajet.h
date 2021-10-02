/*************************************************************************
                           Trajet  -  Classe abstraite permettant le polymophisme entre
                           deux classes dérivées (TrajetSimple et TrajetComposé).
                             -------------------
    début                : $DATE$
    copyright            : (C) 2021 par Vallet Gharib
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées
#include <iostream>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Trajet ( const Trajet & unTrajet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    virtual void Afficher() = 0;
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Trajet (const char* villeD= nullptr, const char* villeA= nullptr );
    // Mode d'emploi :
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

