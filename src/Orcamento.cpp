#include <iostream>
#include <string>
#include <vector>
#include "ItensOrcamento.cpp"
using std::string, std::vector;

class Orcamento
{
public:
    string id;
    string nome;
    string clienteId;
    vector<ItemOrcamento> itens;
    float valorTotal;

    void listarOrcamento();
    Orcamento editarOrcamento();
    void reset();
};