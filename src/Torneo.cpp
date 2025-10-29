#include "Torneo.h"

Torneo::~Torneo() {
    for (auto& p : videojuegosDisponibles) delete p.second;
    for (auto& j : jugadoresRegistrados) delete j.second;
}

void Torneo::registrarVideojuego() {
    std::string nombre , codigo , genero;
    int nivelDificultad;
    std::cout << "Codigo: " ; std::cin >> codigo;
    if (videojuegosDisponibles.count(codigo)) {
        std::cout << " Ya existe un videojuego con ese codigo";
        return;
    }

    std::cout << "Nombre: "; std::getline(std::cin,nombre);
    std::cout << "Genero: "; std::getline(std::cin , genero);
    std::cout << "Nivel  d dificultad(1-5): "; std::cin >> nivelDificultad;

    if (nivelDificultad < 1 || nivelDificultad > 5) {
        std::cout << "Dificultad no valida";
        return;
    }

    videojuegosDisponibles[codigo] = new Videojuego(codigo, nombre, genero, nivelDificultad);
    std::cout << "Videojuego registrado";
}

void Torneo::registrarJugador() {
    std::string nickname;
    int nivelRanking;

    std::cout << "Nickname: "; std::cin >> nickname;
    if (jugadoresRegistrados.count(nickname)) {
        std::cout << "Ya hay un jugador registrado";
        return;
    }

    std::cout << "NivelRanking(1-100): "; std::cin >> nivelRanking;
    if (nivelRanking < 1 || nivelRanking > 100) {
        std::cout << "Nivel no valido";
        return;
    }

    jugadoresRegistrados[nickname] = new Jugador(nickname, nivelRanking);
}

