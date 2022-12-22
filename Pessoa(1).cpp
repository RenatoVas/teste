#include "Pessoa.hpp"

void Pessoa::setNome()
{
    cin >> nome;
}

void Pessoa::setNome(string l)
{
    nome = l;
}

string Pessoa::getNome()
{
    return nome;
}