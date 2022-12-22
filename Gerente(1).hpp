#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_

#include <iostream>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario
{
    public:
        Gerente();

        void setNFucionarios(float);
        void setHorasEx(float);

        float getNFucionarios();
        float getHorasEx();

        float calculaSalarioBruto();

    protected:
        float calculaBonus();

    private:
        float n_funcionarios;
        float horasEx;
};
#endif