#include <iostream>

#include "Joueur.h"
#include "Enclos.h"
#include "Moggu.h"

int main() {

    Joueur joueur;
    std::cout << joueur;
    joueur.nourrirMoggu();
    std::cout << joueur;


    return EXIT_SUCCESS;

}



