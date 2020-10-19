#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"
using namespace std;

class Engenheiro : public Empregado{
  public:
  void setEngenheiro ( Engenheiro *acesso, int _projetos, string _nome, double _salarioHora );
  void mostraEngenheiro ( Engenheiro *acesso, double horasTrabalhadas );

  private:
  string nome;
  int projetos;
};
#endif