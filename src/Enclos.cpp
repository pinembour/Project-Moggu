/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : enclos
 * @created     : samedi sept. 28, 2019 17:48:44 CEST
 */

#include "Enclos.h"
#include "Moggu.h"

Enclos::Enclos():identifiant(1),capacite(1),decoration(0),proprete(100),moggu(){}

Enclos::~Enclos(){}

Enclos::Enclos(const Enclos& enclos){
    this->identifiant = enclos.identifiant;
    this->capacite = enclos.capacite;
    this->decoration = enclos.decoration;
    this->proprete = enclos.proprete;
    this->moggu = enclos.moggu;
}

Enclos& Enclos::operator=(const Enclos& enclos){
    this->identifiant = enclos.identifiant;
    this->capacite = enclos.capacite;
    this->decoration = enclos.decoration;
    this->proprete = enclos.proprete;
    this->moggu = enclos.moggu;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Enclos& enclos) {
    os << "Affichage de l'enclos" << std::endl;
    os << "Identifiant : " << enclos.identifiant << std::endl;
    os << "Capacite : " << enclos.capacite << std::endl;
    os << "Decoration : " << enclos.decoration << std::endl;
    os << "Propreté: " << enclos.proprete << std::endl;
    os << "Moggu : " << enclos.moggu << std::endl;
    return os;
}
