#ifndef IORCAMENTO_HPP
#define IORCAMENTO_HPP
#include <string>
#include <vector>
#include "IItensOrcamento.hpp"
using std::string, std::vector;


class Orcamento
{
public:
    string id;
    string nome;
    string clienteId;
    vector<ItemOrcamento> itens;
    float valorTotal;

    Orcamento(string id, string nome, string clienteId, vector<ItemOrcamento> itens);
    void listarOrcamento();
    void listarOrcamentoSimples();
    Orcamento editarOrcamento(Orcamento novoOrcamento);
    void calcularValorTotal();
    void reset();
};
#endif