#ifndef ICLIENTE_HPP
#define ICLIENTE_HPP
#include <string>
using std::string;

class Cliente
{
public:
    string id;
    string nome;
    string email;
    string telefone;

    Cliente(string id, string nome, string email, string telefone);
    void listarCliente();
    Cliente editarCliente(Cliente novosDados);
    Cliente reset();
};

#endif