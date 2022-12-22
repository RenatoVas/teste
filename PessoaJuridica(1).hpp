#ifndef _PESSOAJURIDICA_HPP_
#define _PESSOAJURIDICA_HPP_

#include <iostream>
#include <string.h>
#include "Pessoa.hpp"

using namespace std;


class PessoaJuridica : public Pessoa
{
    public:
        PessoaJuridica();

        void setCNPJ();
        void setCNPJ(int);
        void setRS();
        void setRS(string);
        void setNF();
        void setNF(string);

        int getCNPJ();
        string getRS();
        string getNF();

        void print();

    private:
        int CNPJ;
        string rs, nf;  //Rasão Social e Nome Fantasia
};



#endif