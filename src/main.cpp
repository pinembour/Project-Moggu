#include <iostream>
#include <thread>
#include "Moggu.h"

int main() {

    Moggu pino;

    std::cout << pino ;

    std::thread th( &Moggu::vivre, pino );
    th.join();



    // pino.afficherMoggu();

    return EXIT_SUCCESS;

}



