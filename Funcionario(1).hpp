#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <iostream>
#include <list>
#include <iterator>
#include "PessoaFisica.hpp"

using namespace std;

class Funcionario : public PessoaFisica
{
    friend ostream& operator<<(ostream&,Funcionario&);
    
    public:
        Funcionario();

        void setMatricula();
        void setMatricula(string);
        void setSalarioBase(float);
        void setCargaHoraria(float);
        void setHorasTrabalhadas();
        void setHorasTrabalhadas(float);

        string getMatricula();
        float getSalarioBase();
        float getCargaHoraria();
        float getHorasTrabalhadas();

        float calculaSalarioBruto();
        
    protected:
        float calculaBonus();

    private:
        string matricula;           //Numero de matricula
        float salarioBase;          //Salario Base
        float cargaHoraria;        //Carga Horaria Mensal
        float HorasTrabalhadas;     //horas Trabalhadas no Mes

};

#endif