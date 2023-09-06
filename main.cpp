#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"


int main() {
	//construindo salas
	SalaAula sala101("Sala 101", 50);
    SalaAula sala102("Sala 102", 40);

	//construindo disciplinas
    Disciplina disc1("Programação", 60, "Prof. Smith");
    Disciplina disc2("Cálculo", 90, "Prof. Johnson");

    disc1.adicionarEmSala(sala101);
    disc2.adicionarEmSala(sala102);

    std::cout << "Disciplina: " << disc1.getNome() << " - Sala: " << disc1.salaAula->getNome() << std::endl;
    std::cout << "Disciplina: " << disc2.getNome() << " - Sala: " << disc2.salaAula->getNome() << std::endl;

    sala101.modificarSalaDeAula(disc1, "Sala 103");

    std::cout << "Nova sala de aula para Programação: " << disc1.salaAula->getNome() << std::endl;

	return 0;
}
