/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : joueur
 * @created     : samedi sept. 28, 2019 17:48:35 CEST
 */

#include <iostream>
#include <string>
#include "Joueur.h"
#include "Enclos.h"

Joueur::Joueur():nom(),argent(),nourriture(),enclos(){}

Joueur::~Joueur(){}

Joueur::Joueur(const Joueur& joueur){
    this->nom = joueur.nom;
    this->argent = joueur.argent;
    this->nourriture = joueur.nourriture;
    this->enclos = joueur.enclos;
}

Joueur& Joueur::operator=(const Joueur& joueur){
    this->nom = joueur.nom;
    this->argent = joueur.argent;
    this->nourriture = joueur.nourriture;
    this->enclos = joueur.enclos;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Joueur& joueur) {
    os << "Affichage du joueur" << std::endl;
    os << "Nom : " << joueur.nom << std::endl;
    os << "Argent : " << joueur.argent << std::endl;
    os << "Nourriture : " << joueur.nourriture << std::endl;
    os << "Enclos : " << joueur.enclos << std::endl;
    return os;
}
