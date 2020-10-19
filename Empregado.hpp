#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  public:
  double salarioHora;
  double quotaMensalVendas;

  //Cálculo de hora extra ( +50% se horasTrabalhadas > 8 )
  double pagamentoMes ( double horasTrabalhadas );
};
#endif