#ifndef INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_TORNEO_H
#define INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_TORNEO_H
#include "Jugador.h"
#include "Videojuego.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Torneo {
private:
    std::map(std::string nombre , Videojuego*) videojuegosDisponibles;
    std::map(std::string , Jugador*) jugadoresRegistrados;

public:
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideojuego();
    void inscribirVideoJuegosDeJugador();
    void inicializarVideojuegos();
    void inicializarJugadores();

};


#endif //INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_TORNEO_H