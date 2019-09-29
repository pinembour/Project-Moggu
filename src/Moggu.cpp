/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Moggu.cpp
 * @created     : samedi sept. 28, 2019 17:48:25 CEST
 */

#include <iostream>

#include "Moggu.h"

Moggu::Moggu():
    id(0),
    nom(""),
    couleur(""),
    age(0),
    poid(1),
    faim(50),
    confort(100),
    vessie(100),
    energie(100),
    fun(100){}


Moggu::Moggu (const Moggu& autre):
    id(autre.id),
    nom(autre.nom),
    couleur(autre.couleur),
    age(autre.age),
    poid(autre.poid),
    faim(autre.faim),
    confort(autre.confort),
    vessie(autre.vessie),
    energie(autre.energie),
    fun(autre.fun){}



Moggu::~Moggu()
{
}




Moggu& Moggu::operator=(const Moggu& autre){
    this->id = autre.id;
    this->nom = autre.nom;
    this->couleur = autre.couleur;
    this->age = autre.age;
    this->poid = autre.poid;
    this->faim = autre.faim;
    this->confort = autre.confort;
    this->vessie = autre.vessie;
    this->energie = autre.energie;
    this->fun = autre.fun;
    return *this;
}

std::ostream& operator<<(std::ostream& out, Moggu moggu){

    moggu.afficherMoggu();

    return out;
}

void Moggu::afficherMoggu(void)const{

    std::cout << "Moggu numéro " << this->id << ":" << std::endl;
    std::cout << "nom :" << this->nom << std::endl;
    std::cout << "couleur :"<< this->couleur<<std::endl;
    std::cout << "Age : " << this->age<<std::endl;
    std::cout << "poid : " << this->poid<<std::endl;
    std::cout << "Faim : " << this->faim << "/100"<< std::endl;
    std::cout << "Confort : "<< this->confort << "/100"<<std::endl;
    std::cout << "Vessie : "<< this->vessie << "/100"<<std::endl;
    std::cout << "Energie : " << this->energie << "/100"<< std::endl;
    std::cout << "Fun :" << this->fun << "/100"<< std::endl;
}


void Moggu::manger(void){
    this->faim +=10;
    if (this->faim > 100 ){
        this->faim= 100;
    }
}
