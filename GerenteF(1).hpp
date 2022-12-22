#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_

#include <iostream>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario
{
    public:
        Gerente();

        void setFuncionariosGerenciados(float);
        void setHorasExcedentes(float);
        void setHoras(float);

        float getFuncionariosGerenciados();
        float getHorasExcedentes();

        bool autenticar(float);
        bool alterarSenha(float, float);
        void alterarSenha(float);
        
        float calculaSalarioBruto();

    protected:
        float calculaBonus();

    private:
        float funcionariosGerenciados;
        float senhaSistema;
        float horasExcedentes;
};

#endif