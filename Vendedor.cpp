#include <string>
#include "Vendedor.hpp"
using namespace std;
#define ANO 12

void Vendedor::setVendedor ( Vendedor *acesso, string _nome, double _salarioHora, double _quotaMV ) {
  acesso->nome = _nome;
  acesso->salarioHora = _salarioHora;
  acesso->quotaMensalVendas = _quotaMV;
}

void Vendedor::mostraVendedor ( Vendedor *acesso, double horasTrabalhadas  ) {
  cout << "Nome: " << acesso->nome << endl;
  cout << "Salario Mes: " << acesso->pagamentoMes( horasTrabalhadas )  << endl;
  cout << "Quota vendas: " << acesso->quotaTotalAnual() << endl;
  cout << endl;
}

double Vendedor::quotaTotalAnual () {
	return ( quotaMensalVendas * ANO );
}