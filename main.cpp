#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include "Empregado.hpp"
#include <iostream>
using namespace std;

int main () {

  Engenheiro eng1;
  eng1.setEngenheiro ( &eng1, 3, "Joao Snow", 35.0  );
  eng1.mostraEngenheiro ( &eng1, 9.5 );
  
  Engenheiro eng2;
  eng2.setEngenheiro ( &eng2, 1, "Daniela Targaryen", 30.0 );
  eng2.mostraEngenheiro ( &eng2, 8 );
  
  Engenheiro eng3;
  eng3.setEngenheiro ( &eng3, 2, "Bruno Stark", 30 );
  eng3.mostraEngenheiro ( &eng3, 8 );
  
  Vendedor vend1;
  vend1.setVendedor ( &vend1, "Tonho Lannister", 20, 5000 );
  vend1.mostraVendedor ( &vend1, 6 );
  
  Vendedor vend2;
  vend2.setVendedor ( &vend2, "Jose Mormont", 25, 3000 );
  vend2.mostraVendedor ( &vend2, 8 );  
	
  Vendedor vend3;
  vend3.setVendedor ( &vend3, "Sonia Stark", 30, 4000 );
  vend3.mostraVendedor ( &vend3, 8 ); 
  
  return 0;	
}