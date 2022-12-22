#ifndef _PESSOAFISICA_HPP_
#define _PESSOAFISICA_HPP_

#include <iostream>
#include <string.h>
#include "Pessoa.hpp"

using namespace std;


class PessoaFisica : public Pessoa
{
    public:
        void setCPF();
        void setCPF(string);

        string getCPF();

        void print();

    private:
        string CPF;
};

#endif