#include "Cliente.hpp"

void Cliente::setTelefone()
{
    cin >> telefone;
}

void Cliente::setTelefone(string n)
{
    telefone = n;
}

void Cliente::setEndereco()
{
    cin >> endereco;
}

void Cliente::setEndereco(string e)
{
    endereco = e;
}

string Cliente::getTelefone()
{
    return telefone;
}

string Cliente::getEndereco()
{
    return endereco;
}

ostream& operator<<(ostream& output, Cliente& c)
{
    cout
    << "\nNome do Cliente: " << c.getNome() << endl
    << "Numero do CPF: " << c.getCPF() << endl
    << "Endereco: " << c.getEndereco() << endl
    << "Telefone: " << c.getTelefone() << endl;

    return output;
}