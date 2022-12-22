#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_

#include <iostream>
#include <string.h>

using namespace std;


class Pessoa
{
    public:
        void setNome();
        void setNome(string);

        string getNome();

    protected:
        string nome;
};

#endif