#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include <iostream>
#include <list>
#include <iterator>
#include "PessoaJuridica.hpp"
#include "Gerente.hpp"
#include "Cliente.hpp"


class Empresa : public PessoaJuridica
{
    public:
        void addFuncionario(Funcionario);
        void addCliente(Cliente);
        void imprimirFuncionario();
        void imprimirCliente();

        float calcularFolhaDePagamento(Gerente);

    private:
        list<Funcionario> lf;   //Lista de Funcionarios
        list<Cliente> lc;       //Lista de Clientes
};

#endif