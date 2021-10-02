/********************************************************************************
                           Collection  -  description
                             -------------------
    début                : 30/09/2021
    copyright            : (C) 2021 par Jibril Gharib & Chloé VALLET
    e-mail               : jibril.gharib@insa-lyon.fr / chloe.vallet@insa-lyon.fr
*********************************************************************************/

//------ Interface de la classe <Collection> (fichier Collection.h) -----------
#if ! defined ( COLLECTION_H )
#define COLLECTION_H

//--------------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------------- Constantes
const unsigned int TAILLE_MAX_INIT = 10;

//------------------------------------------------------------------------ Types

//------------------------------------------------------------------------------
// Rôle de la classe <Collection>
// La classe collection est une structure donnée qui permet de gérer dynmaique-
// ment une collection de Trajet
//------------------------------------------------------------------------

class Collection
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Ajouter (Trajet trajetAAjouter);
    // Mode d'emploi :
    //
    // Contrat :

    unsigned int Ajuster (int delta);
    // Mode d'emploi :
    //
    // Contrat :

//-------------------------------------------- Constructeurs - destructeur
    Collection ( unsigned  int tailleMaxInitiale = TAILLE_MAX_INIT);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Collection ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    unsigned int tailleMax;
    unsigned int tailleCourante;
    Trajet * trajets;
};

//-------------------------------- Autres définitions dépendantes de <Collection>

#endif // COLLECTION_H

