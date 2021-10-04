/*********************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
**********************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisées
#include "../Trajet/Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
enum moyenTransport {AUTO, BATEAU, AVION, TRAIN, AUTRE};

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
//
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
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
//-------------------------------------------- Constructeurs - destructeur

    TrajetSimple (const char* villeD = "-", const char* villeA = "-", moyenTransport transport = AUTRE);
    // Mode d'emploi :
    //
    // Contrat :
    //


    virtual ~TrajetSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    moyenTransport typeTransport;
};

//-------------------------------- Autres définitions dépendantes de <TrajetSimple>

#endif // TRAJETSIMPLE_H

