/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : enclos
 * @created     : samedi sept. 28, 2019 17:48:06 CEST
 */

#ifndef ENCLOS_HPP

#define ENCLOS_HPP

#include <string>
#include <iostream>

class Enclos
{
    public:
        Enclos ();
        virtual ~Enclos ();
	Enclos(int identifiant, int capacite, int decoration, int proprete);
	Enclos(const Enclos& joueur);
	Enclos& operator=(const Enclos& joueur);
	friend std::ostream& operator<<(std::ostream& os, const Enclos& joueur);

    private:
	int identifiant, capacite, decoration, proprete;

        /* private data */
};

#endif /* end of include guard ENCLOS_HPP */

