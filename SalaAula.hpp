#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"

// class Disciplina; // Foward Declaration

class SalaAula{
	friend class Disciplina; // SalaAula é amiga da classe Disciplina

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);

        void adicionarDisciplina(Disciplina& disciplina);
        void removerDisciplina(Disciplina* Disciplina);

        void modificarSalaDeAula(Disciplina &disciplina, std::string &novaSala);

		std::list<Disciplina*> getDisciplinas();

	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif