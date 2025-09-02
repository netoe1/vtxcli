#include "../include/ICliente.hpp"
#include <string>
#include <iostream>

using std::string;
Cliente::Cliente(string id, string nome, string email, string telefone)
{

    if (id.empty() || nome.empty() || email.empty() || telefone.empty())
    {
        std::cout << "cliente-constructor: nenhum dos valores que você digitou no construtor podem ser inválidos.\n";
        return;
    }

    this->id = id;
    this->nome = nome;
    this->email = email;
    this->telefone = telefone;
}
void Cliente::listarCliente()
{
    std::cout << "Id:" << this->id << "\n";
    std::cout << "Nome:" << this->nome << "\n";
    std::cout << "Email:" << this->email << "\n";
    std::cout << "Telefone:" << this->telefone << "\n";
}

Cliente Cliente::editarCliente(Cliente novosDados)
{
    this->id = novosDados.id;
    this->nome = novosDados.nome;
    this->email = novosDados.email;
    this->telefone = novosDados.telefone;
    return *this;
}

Cliente Cliente::reset()
{
    this->id = "undefined";
    this->nome = "undefined";
    this->email = "undefined";
    this->telefone = "undefined";
    return *this;
}