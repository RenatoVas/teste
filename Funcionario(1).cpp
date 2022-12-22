#include "Funcionario.hpp"

Funcionario::Funcionario()
{
    setSalarioBase(10);
    setCargaHoraria(2);
}

float Funcionario::calculaSalarioBruto()
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

float Funcionario::calculaBonus()
{
    return 0;
}

void Funcionario::setMatricula()
{
    cin >> matricula;
}

void Funcionario::setMatricula(string m)
{
    matricula = m;
}

void Funcionario::setSalarioBase(float sb)
{
    if(sb < 0)
    {
        salarioBase = 0;
    }
    else
    {
        salarioBase = sb;
    }
}

void Funcionario::setCargaHoraria(float c)
{
    if(c < 0)
    {
        cargaHoraria = 0;
    }
    else
    {
        cargaHoraria = c;
    }
}

void Funcionario::setHorasTrabalhadas(float ht)
{
    
    if(ht < 0)
    {
        HorasTrabalhadas = 0;
    }
    else if(ht < cargaHoraria)
    {
        HorasTrabalhadas = ht;
    }
    else
    {
        HorasTrabalhadas = cargaHoraria;
    }
}

string Funcionario::getMatricula()
{
    return matricula;
}

float Funcionario::getSalarioBase()
{
    return salarioBase;
}

float Funcionario::getCargaHoraria()
{
    return cargaHoraria;
}

float Funcionario::getHorasTrabalhadas()
{
    return HorasTrabalhadas;
}

ostream& operator<<(ostream& output,Funcionario& f)
{
    cout
    << "\nNumero de Matricula: " << f.getMatricula() << endl
    << "Nome do Fundionario: " << f.getNome() << endl
    << "Numero do CPF: " << f.getCPF() << endl
    << "Salario Bruto: " << f.calculaSalarioBruto() << endl;

    return output;
}