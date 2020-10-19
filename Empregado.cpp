#include <iostream>
#include <string>
#include "Empregado.hpp"
#define HORAS_DIARIAS 8

double Empregado::pagamentoMes ( double horasTrabalhadas ) {
  double t = horasTrabalhadas;
  
	if ( horasTrabalhadas > HORAS_DIARIAS ) {
    double x = horasTrabalhadas - HORAS_DIARIAS;
    t += ( x / 2 );
  }
	return ( t * salarioHora );
}