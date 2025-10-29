#include "Videojuego.h"

Videojuego::Videojuego() {
    codigo = "" ;
    nombre = "" ;
    genero = "" ;
    nivelDificultad = 0 ;

}

Videojuego::Videojuego(std::string &codigo, std::string &nombre, std::string &genero, int &nivelDificultad)
: codigo(codigo) , nombre(nombre) , genero(genero) , nivelDificultad(nivelDificultad) {}

void Videojuego::mostrar() {
    std::cout << "Juego: " << nombre << " codigo: " << codigo
    << " genero: " << genero << " nivel de dificultad (1-5): " << nivelDificultad << std::endl;
}

std::string Videojuego::getcodigo() {return codigo; }

int Videojuego::getnivelDificultad() {return nivelDificultad; }

std::string Videojuego::getgenero() {return genero; }

