#include "GerenteF.hpp"
Gerente::Gerente()
{
    setSalarioBase(10);
    setCargaHoraria(2);
    setHoras(1);
    setFuncionariosGerenciados(2);
}

void Gerente::setFuncionariosGerenciados(float f = 0)
{
    if(f < 0)
    {
        funcionariosGerenciados = 0;
    }
    else
    {
        funcionariosGerenciados = f;
    }
}

void Gerente::setHorasExcedentes(float hx = 0)
{
    if(hx < 0)
    {
        horasExcedentes = 0;
    }
    else
    {
        horasExcedentes = hx;
    }
}

void Gerente::setHoras(float ht = 0)
{
    if(ht <= getCargaHoraria())
    {
        setHorasTrabalhadas(ht);
    }
    else
    {
        setHorasExcedentes(ht - getCargaHoraria());
    }
}

float Gerente::getFuncionariosGerenciados()
{
    return funcionariosGerenciados;
}

float Gerente::getHorasExcedentes()
{
    return horasExcedentes;
}

bool Gerente::autenticar(float a)
{
    if(a == senhaSistema)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Gerente::alterarSenha(float s, float ns)
{
    if(s == senhaSistema)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Gerente::alterarSenha(float ns)
{
    if(ns < 0)
    {
        cerr << "_valor de senhaSistema invalido_";
        exit(0);
    }
    senhaSistema = ns;
}

float Gerente::calculaSalarioBruto()
{
    if(getCargaHoraria() != 0)
    {
        cout << "ESTOU CALCULANDO O SALARIO_BRUTO\n";
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
    cout << "ESTOU CALCULANDO O BONUS\n";
    if(getCargaHoraria() == 0)
    {
        return 0;
    }
    if(calculaSalarioBruto() >= 0.3 * calculaSalarioBruto())
    {
        if(horasExcedentes <= 0)
        {
            return
            (
                getSalarioBase()
                + getSalarioBase()
                * getFuncionariosGerenciados()
                * 0.005
            );
        }
        else
        {
            return
            (
                getSalarioBase()
                + getSalarioBase()
                * getFuncionariosGerenciados()
                * 0.005
                + getSalarioBase()
                * 1.5
                / getCargaHoraria()
            );
        }
    }
    else
    {
        if(horasExcedentes <= 0)
        {
            return
            (
                getSalarioBase()
                + getSalarioBase()
                * getFuncionariosGerenciados()
                * 0.3
            );
        }
        else
        {
            return
            (
                getSalarioBase()
                + getSalarioBase()
                * getFuncionariosGerenciados()
                * 0.3
                + getSalarioBase()
                * 1.5
                / getCargaHoraria()
            );
        }
    }
}