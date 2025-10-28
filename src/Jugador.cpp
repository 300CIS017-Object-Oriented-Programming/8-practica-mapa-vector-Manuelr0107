#include "Jugador.h"


Jugador::Jugador() {
    nickname = "" ;
    nivelRanking = 0 ;
}

Jugador::Jugador(std::string &nickname, int &nivelRanking) : nickname(nickname), nivelRanking(nivelRanking){}

void Jugador::mostrar() {
    std::cout << "El jugador : " << nickname <<
        " con el nivel Ranking (1-100) " << nivelRanking << std::endl;
}

