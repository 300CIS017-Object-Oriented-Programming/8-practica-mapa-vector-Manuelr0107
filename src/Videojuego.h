#ifndef INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_VIDEOJUEGO_H
#define INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_VIDEOJUEGO_H

#include <iostream>
#include <string>
#include <vector>

class Videojuego {
private:
    std::string codigo;
    std::string nombre;
    std::string genero;
    int nivelDificultad;

public:
    Videojuego();
    Videojuego(std::string &codigo, std::string &nombre,std::string &genero, int &nivelDificultad);

    void mostrar();



};


#endif //INC_8_PRACTICA_MAPA_VECTOR_MANUELR0107_VIDEOJUEGO_H