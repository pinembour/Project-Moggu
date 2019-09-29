/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : joueur
 * @created     : samedi sept. 28, 2019 17:48:13 CEST
 */
#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include <string>
#include <iostream>
#include "Enclos.h"
#include "Moggu.h"

class Joueur
{
    public:
	virtual ~Joueur ();
        Joueur ();
	Joueur(std::string, int argent, int nourriture, Enclos enclos);
	Joueur(const Joueur& joueur);
	Joueur& operator=(const Joueur& joueur);
	friend std::ostream& operator<<(std::ostream& os, const Joueur& joueur);
	void nourrirMoggu();
	void acheterNourriture();
	void nettoyerEnclos();

    private:
	std::string nom;
	int argent,nourriture;
	Enclos enclos;

        /* private data */
};

#endif /* end of include guard JOUEUR_HPP */

