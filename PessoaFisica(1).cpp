#include "PessoaFisica.hpp"

void PessoaFisica::setCPF()
{
    cin >> CPF;
}

void PessoaFisica::setCPF(string n)
{
    CPF = n;
}

string PessoaFisica::getCPF()
{
    return CPF;
}

void PessoaFisica::print()
{
    cout << getNome() << endl
        << "CPF: " << getCPF() << endl;
}