#include <iostream>

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Empresa.hpp"

using namespace std;

int main()
{
    Empresa e;
    Gerente g;
    Cliente c;
    Funcionario f;
    
    e.addFuncionario(f);
    e.addFuncionario(f);

    g.setHorasTrabalhadas(1);
    
    cout << "Folha de pagamentos: " << e.calcularFolhaDePagamento(g) << endl;

    return EXIT_SUCCESS;
}