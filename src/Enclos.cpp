/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : enclos
 * @created     : samedi sept. 28, 2019 17:48:44 CEST
 */

#include "Enclos.h"

Enclos::Enclos():identifiant(),capacite(),decoration(),proprete(){}

Enclos::~Enclos(){}

Enclos::Enclos(const Enclos& enclos){
    this->identifiant = enclos.identifiant;
    this->capacite = enclos.capacite;
    this->decoration = enclos.decoration;
    this->proprete = enclos.proprete;
}

Enclos& Enclos::operator=(const Enclos& enclos){
    this->identifiant = enclos.identifiant;
    this->capacite = enclos.capacite;
    this->decoration = enclos.decoration;
    this->proprete = enclos.proprete;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Enclos& enclos) {
    os << "Affichage de l'enclos" << std::endl;
    os << "Identifiant : " << enclos.identifiant << std::endl;
    os << "Capacite : " << enclos.capacite << std::endl;
    os << "Decoration : " << enclos.decoration << std::endl;
    os << "Propreté: " << enclos.proprete << std::endl;
    return os;
}
