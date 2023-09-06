
#include <iostream>
#include "Disciplina.hpp"
#include "SalaAula.hpp"


Disciplina::Disciplina(std::string nome)
	:nome{nome}, SalaAula{nullptr} {
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int carga){
	this->cargaHoraria = carga;
}

Pessoa* Disciplina::getProfessor(){
    return this->professor;
}

void Disciplina::setProfessor(Pessoa* prof){
    this->professor = prof;
}

void Disciplina::imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso){
    double pctCurso = (double)this->cargaHoraria/cargaTotalCurso;
    pctCurso = pctCurso * 100;
    std::cout << cabecalho << std::endl;
    std::cout << "Disciplina: " << this->nome << std::endl;
    std::cout << "Carga: " << this->cargaHoraria << std::endl;
    std::cout << "Porcentagem do curso: " << pctCurso << "%" << std::endl;
    std::cout << "Professor: " << this->professor->getNome() << std::endl;
}

void Disciplina::setSalaAula(SalaAula* sala) {

    this->sala = sala; 
}


SalaAula* Disciplina::getSalaAula() {
    return this->SalaAula;
}

void Disciplina::adicionarEmSala(SalaAula& sala) {
    salaAula = &sala;
}

void Disciplina::modificarSalaDeAula(const std::string& novaSala) {
    salaAula->nomeSala = novaSala;
}

