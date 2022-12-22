#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_

#include <iostream>
#include "PessoaFisica.hpp"

class Cliente : public PessoaFisica
{
    friend ostream& operator<<(ostream&, Cliente&);
    public:
        void setTelefone();
        void setTelefone(string);
        void setEndereco();
        void setEndereco(string);

        string getTelefone();
        string getEndereco();

        void imprimir();

    private:
        string telefone;
        string endereco;
};

#endif