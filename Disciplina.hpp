#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "SalaAula.hpp"
#include "ConteudoMinistrado.hpp"

// class SalaAula; //Forward declaration

class Disciplina{
	friend class SalaAula;

	public:
		Disciplina(std::string nome);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int carga);

		Pessoa* getProfessor();
        void setProfessor(Pessoa* prof);

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

		//set e get aula
		void setSalaAula(SalaAula* sala);
		SalaAula* getSalaAula(); 

		// adicionar uma disciplina em sala de aula
   		void adicionarEmSala(SalaAula& sala);

		// modificar a sala de aula da disciplina
		void modificarSalaDeAula(std::string& novaSala);



	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		SalaAula* salaAula; 
		SalaAula* salaAnterior; //atributo membro referencia sala anterior
		std::list<ConteudoMinistrado*> listaConteudo;

};
#endif