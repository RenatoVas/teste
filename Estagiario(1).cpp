#include "Estagiario.hpp"

void Estagiario::setContratoRestante(float cr)
{
    if(cr < 0)
    {
        contratoRestante = 0;
    }
    else
    {
        contratoRestante = cr;
    }
}

void Estagiario::setEstagio(string e)   //"Jovem_Aprediz" OU "Universitario"
{
    if(e == "Jovem_Aprediz")
    {
        estagio = e;
    }
    else if(e == "Universitario")
    {
        estagio = e;
    }
}

float Estagiario::getContratoRestante()
{
    return contratoRestante;
}

string Estagiario::getEstagio()
{
    return estagio;
}

float Estagiario::calculaSalarioBruto()
{
    return 
    (
        getSalarioBase()
        * getHorasTrabalhadas()
        / getCaragaHoraria()
        + calculaBonus()
    );
}

float Estagiario::calculaBonus()
{
    if(estagio == "Jovem Aprediz")
    {
        return 
        (
            0.05
            * getSalarioBase()
            / contratoRestante
        );
    }
    else if(estagio == "Universitario")
    {
        return 
        (
            0.1
            * getSalarioBase()
            / contratoRestante
        );
    }
}