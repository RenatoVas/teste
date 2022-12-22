#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica()
{
    setCNPJ(0);
    setRS("_VAZIO_");
    setNF("_VAZIO_");
}

void PessoaJuridica::setCNPJ()
{
    cin >> CNPJ;
    if(CNPJ < 0)
    {
        CNPJ = 0;
    }
}

void PessoaJuridica::setCNPJ(int n)
{
    if(n < 0)
    {
        CNPJ = 0;
    }
    else
    {
        CNPJ = n;
    }
}

void PessoaJuridica::setRS()
{
    cin >> rs;
}

void PessoaJuridica::setRS(string r)
{
    rs = r;
}

void PessoaJuridica::setNF()
{
    cin >> nf;
}

void PessoaJuridica::setNF(string n)
{
    nf = n;
}

int PessoaJuridica::getCNPJ()
{
    return CNPJ;
}

string PessoaJuridica::getRS()
{
    return rs;
}

string PessoaJuridica::getNF()
{
    return nf;
}

void PessoaJuridica::print()
{
    cout << getNome() << endl
        << "CNPJ: " << getCNPJ() << endl
        << "Rasao Social: " << getRS() << endl
        << "Nome Fantasia: " << getNF() << endl;
}