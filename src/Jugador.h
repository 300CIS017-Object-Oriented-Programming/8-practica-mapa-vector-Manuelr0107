#ifndef INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_JUGADOR_H
#define INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_JUGADOR_H
#include "Videojuego.h"
#include <iostream>
#include <string>
#include <vector>

class Jugador {

private:
    std::string nickname;
    int nivelRanking;
    std::vector<Videojuego*> videoJuegosInscritos;

public:
    Jugador();
    Jugador(std::string &nickname , int &nivelRanking);

    void mostrar();
};


#endif //INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_JUGADOR_H