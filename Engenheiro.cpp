#include "Engenheiro.hpp"
#include <iostream>
#include <string>
using namespace std;

void Engenheiro::setEngenheiro ( Engenheiro *acesso, int _projetos, string _nome, double _salarioHora ) {
  acesso->nome = _nome;
  acesso->salarioHora = _salarioHora;
  acesso->projetos = _projetos; 
}

void Engenheiro::mostraEngenheiro ( Engenheiro *acesso, double horasTrabalhadas ) {
  cout << "Nome: " << acesso->nome << endl;
  cout << "Salario Mes: " << acesso->pagamentoMes ( horasTrabalhadas ) << endl;
  cout << "Projetos: " << acesso->projetos << endl;
  cout << endl;
}