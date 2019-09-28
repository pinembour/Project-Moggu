/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Moggu.h
 * @created     : samedi sept. 28, 2019 17:47:49 CEST
 */

#include <iostream>
#include <string>

#ifndef Moggu_HPP

#define Moggu_HPP


class Moggu
{
    public:
        Moggu ();                       // constructeur
        Moggu (Moggu const& autre);     // recopie

        virtual ~Moggu ();              // destructeur


        Moggu& operator=(const Moggu& autre);

        friend std::ostream& operator<<(std::ostream& out, Moggu moggu);

        void afficherMoggu(void)const ;

        void manger(void);

    private:
        /* private data */

        int id;
        std::string nom;
        std::string couleur;
        int age;
        float poid;

        /*-------*/

        int faim;
        int confort;
        int vessie;
        int energie;
        int fun;
};

#endif /* end of include guard Moggu_HPP */

