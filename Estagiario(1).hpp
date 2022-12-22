#ifndef _ESTAGIARIO_HPP_
#define _ESTAGIARIO_HPP_

#include <iostream>
#include "Funcionario.hpp"

class Estagiario : public Funcionario
{
    public:
    void setContratoRestante(float);
    void setEstagio(string);

    float getContratoRestante();
    string getEstagio();

    float calculaSalarioBruto();

    protected:
    float calculaBonus();

    private:
    float contratoRestante;     //Tempos Restante em Meses
    string estagio;             //Jovem Aprediz ou Universitario
};

#endif