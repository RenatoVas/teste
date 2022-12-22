#include "Gerente.hpp"

Gerente::Gerente()
{
    
}

void Gerente::setNFucionarios(float nf)
{
    n_funcionarios = nf;
}

void Gerente::setHorasEx(float hx)
{
    horasEx = hx;
}

float Gerente::getNFucionarios()
{
    return n_funcionarios;
}

float Gerente::getHorasEx()
{
    return horasEx;
}

float Gerente::calculaSalarioBruto()
{
    if(getCargaHoraria() != 0)
    {
        return 
        (
            getSalarioBase() 
            * getHorasTrabalhadas() 
            / getCargaHoraria() 
            + calculaBonus()
        );
    }
    else
    {
        return 0;
    }
}

float Gerente::calculaBonus()
{
    if((0.005 * getNFucionarios() * getSalarioBase())
    <= (0.3 * getSalarioBase() * getHorasTrabalhadas() / getCargaHoraria()))
    {
        return 
        (
            0.005
            * getNFucionarios()
            * getSalarioBase()
        );
    }
    else
    {
        return
        (
            0.3
            * getSalarioBase()
            * getHorasTrabalhadas()
            / getCargaHoraria()
        );
    }
}