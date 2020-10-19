#ifndef VENDERDOR_H
#define VENDERDOR_H
#include "Empregado.hpp"
using namespace std;

class Vendedor : public Empregado {
  private:
  string nome;

  public:
  double quotaTotalAnual ();
  void setVendedor ( Vendedor *acesso, string _nome, double _salarioHora, double _quotaMV );
  void mostraVendedor ( Vendedor *acesso, double horasTrabalhadas );
};
#endif