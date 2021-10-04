/*********************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
**********************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisées
#include "../Collection/Collection.h"
#include "../Trajet/Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//
//
//------------------------------------------------------------------------

class TrajetCompose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual bool EstValide () const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual void Afficher() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool Ajouter(Trajet* trajetAAjouter);
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur

    TrajetCompose (const char* villeD = "-" , const char* villeA = "-", unsigned int unTailleMax = TAILLE_MAX_INIT );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetCompose ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Collection * trajetsSimple;
};

//-------------------------------- Autres définitions dépendantes de <TrajetCompose>

#endif // TRAJETCOMPOSE_H



