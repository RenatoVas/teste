#include "Empresa.hpp"
#include <bits/stdc++.h>


void Empresa::addFuncionario(Funcionario f)
{
    /*cout << "\nNumero de Matricula:\n";
    f.setMatricula();
    cout << "Nome do Fundionario:\n";
    f.setNome();
    cout << "Numero do CPF:\n";
    f.setCPF();*/
    cout << "Horas trabalhadas:\n";
    float ht;
    cin >> ht;
    f.setHorasTrabalhadas(ht);

    lf.push_back(f);
}

void Empresa::addCliente(Cliente c)
{
    cout << "\nNome do Cliente:\n";
    c.setNome();
    cout << "Numero do CPF:\n";
    c.setCPF();
    cout << "Endereco:\n";
    c.setEndereco();
    cout << "Telefone:\n";
    c.setTelefone();

    lc.push_back(c);
}

void Empresa::imprimirFuncionario()
{
    list<Funcionario>::iterator cf;
    for (cf = lf.begin(); cf != lf.end(); cf++)
    {
        cout << *cf;
    }
    //cout << "Tamanho: " << lf.size() << endl;
}

void Empresa::imprimirCliente()
{
    list<Cliente>::iterator cc;
    for (cc = lc.begin(); cc != lc.end(); cc++)
    {
        cout << *cc;
    }
}

float Empresa::calcularFolhaDePagamento(Gerente g)
{
    g.setNFucionarios(lf.size());

    float sb = 0;
    for (auto& f: lf)   //EU NÃO SEI O PORQUÊ ISSO FAZ ISSO, MAS ACHO QUE SEI COMO ISSO FAZ ISSO
    {
        sb = f.calculaSalarioBruto() + sb;
    }
    sb = g.calculaSalarioBruto() + sb;

    return
    (
        sb
    );
}