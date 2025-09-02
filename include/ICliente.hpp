#ifndef ICLIENTE_HPP
#define ICLIENTE_HPP
#include <string>
#include <vector>
#include "IOrcamento.hpp"
using std::string, std::vector;

class Cliente
{
public:
    string id;
    string nome;
    string email;
    string telefone;
    vector<Orcamento> orcamentos;

    Cliente(string id, string nome, string email, string telefone);
    void listarCliente();
    Cliente editarCliente(Cliente novosDados);
    Cliente reset();
};

#endif